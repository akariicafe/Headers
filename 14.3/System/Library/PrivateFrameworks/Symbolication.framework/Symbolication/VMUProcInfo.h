@class NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
}

+ (id)getProcessIds;
+ (int)processParentId:(int)a0;
+ (BOOL)isProcessRunning:(int)a0;

- (BOOL)terminate;
- (id)envVars;
- (id)initWithTask:(unsigned int)a0;
- (id)procTableName;
- (id)platformName;
- (BOOL)isApp;
- (BOOL)isRunning;
- (id)realAppName;
- (id)init;
- (unsigned int)platform;
- (void).cxx_destruct;
- (int)pid;
- (unsigned int)task;
- (long long)compareByUserAppName:(id)a0;
- (void)dealloc;
- (id)firstArgument;
- (id)arguments;
- (int)cpuType;
- (id)valueForEnvVar:(id)a0;
- (long long)compare:(id)a0;
- (void)update;
- (unsigned long long)hash;
- (struct timeval { long long x0; int x1; })startTime;
- (BOOL)isNative;
- (BOOL)isCFM;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)isMachO;
- (id)name;
- (long long)compareByName:(id)a0;
- (id)initWithPid:(int)a0;
- (BOOL)signal:(int)a0;
- (int)ppid;
- (id)requestedAppName;
- (id)userAppName;

@end
