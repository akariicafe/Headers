@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface NSConcreteTask : NSTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
    id /* block */ _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    char _qos;
    _Atomic BOOL _isSpawnedProcessDisclaimed;
}

- (void)terminate;
- (int)_procid;
- (void)setEnvironment:(id)a0;
- (void)interrupt;
- (id)launchPath;
- (id)arguments;
- (BOOL)isRunning;
- (id)standardInput;
- (id)standardError;
- (void)waitUntilExit;
- (void)terminateTask;
- (long long)terminationReason;
- (void)setQualityOfService:(long long)a0;
- (id)currentDirectoryPath;
- (void)setLaunchPath:(id)a0;
- (id)standardOutput;
- (id)taskDictionary;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)setPreferredArchitectures:(id)a0;
- (void)setCurrentDirectoryPath:(id)a0;
- (long long)_platformExitInformation;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (int)terminationStatus;
- (void)setStandardInput:(id)a0;
- (void)setStandardError:(id)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (id)preferredArchitectures;
- (BOOL)launchAndReturnError:(id *)a0;
- (long long)qualityOfService;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setStandardOutput:(id)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (void)setTaskDictionary:(id)a0;
- (id /* block */)terminationHandler;
- (void)_setTerminationHandler:(id /* block */)a0;
- (id)init;
- (BOOL)suspend;
- (void)setTerminationHandler:(id /* block */)a0;
- (void)launch;
- (BOOL)resume;
- (id)environment;
- (void)dealloc;
- (int)processIdentifier;
- (long long)suspendCount;
- (void)setArguments:(id)a0;

@end
