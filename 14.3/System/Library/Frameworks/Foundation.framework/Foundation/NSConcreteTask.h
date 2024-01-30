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

- (void)setTerminationHandler:(id /* block */)a0;
- (void)terminate;
- (void)launch;
- (int)_procid;
- (BOOL)isRunning;
- (void)setQualityOfService:(long long)a0;
- (long long)terminationReason;
- (void)setArguments:(id)a0;
- (id)init;
- (void)interrupt;
- (long long)suspendCount;
- (id)launchPath;
- (void)dealloc;
- (long long)qualityOfService;
- (id)arguments;
- (id)standardInput;
- (id)standardError;
- (void)waitUntilExit;
- (void)terminateTask;
- (id)currentDirectoryPath;
- (void)setLaunchPath:(id)a0;
- (id)standardOutput;
- (id)taskDictionary;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (int)processIdentifier;
- (void)setCurrentDirectoryPath:(id)a0;
- (long long)_platformExitInformation;
- (id)environment;
- (void)_withTaskDictionary:(id /* block */)a0;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)setPreferredArchitectures:(id)a0;
- (void)_setTerminationHandler:(id /* block */)a0;
- (id)preferredArchitectures;
- (int)terminationStatus;
- (void)setStandardInput:(id)a0;
- (void)setStandardError:(id)a0;
- (BOOL)launchAndReturnError:(id *)a0;
- (id /* block */)terminationHandler;
- (void)setStandardOutput:(id)a0;
- (void)setTaskDictionary:(id)a0;
- (void)setEnvironment:(id)a0;
- (BOOL)resume;
- (BOOL)suspend;

@end
