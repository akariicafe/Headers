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

- (long long)terminationReason;
- (void)setArguments:(id)a0;
- (void)terminate;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)a0;
- (id)standardInput;
- (int)processIdentifier;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)_setTerminationHandler:(id /* block */)a0;
- (id)standardOutput;
- (id)arguments;
- (id)environment;
- (long long)_platformExitInformation;
- (id)preferredArchitectures;
- (void)setStandardInput:(id)a0;
- (BOOL)suspend;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setLaunchPath:(id)a0;
- (id /* block */)terminationHandler;
- (long long)suspendCount;
- (int)_procid;
- (void)setEnvironment:(id)a0;
- (BOOL)launchAndReturnError:(id *)a0;
- (void)launch;
- (void)setTaskDictionary:(id)a0;
- (BOOL)isRunning;
- (void)interrupt;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)dealloc;
- (void)setPreferredArchitectures:(id)a0;
- (id)taskDictionary;
- (id)currentDirectoryPath;
- (id)launchPath;
- (void)setStandardOutput:(id)a0;
- (id)init;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (void)setStandardError:(id)a0;
- (void)setTerminationHandler:(id /* block */)a0;
- (void)terminateTask;
- (void)waitUntilExit;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)resume;
- (id)standardError;
- (int)terminationStatus;

@end
