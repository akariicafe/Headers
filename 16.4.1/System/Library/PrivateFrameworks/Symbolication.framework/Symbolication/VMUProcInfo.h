@class NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
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
    BOOL _isZombie;
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)a0;
+ (int)processParentId:(int)a0;

- (id)initWithTask:(unsigned int)a0;
- (BOOL)terminate;
- (BOOL)signal:(int)a0;
- (int)ppid;
- (id)initWithPid:(int)a0;
- (id)valueForEnvVar:(id)a0;
- (int)cpuType;
- (id)realAppName;
- (id)procTableName;
- (id)firstArgument;
- (long long)compareByName:(id)a0;
- (struct timeval { long long x0; int x1; })startTime;
- (id)arguments;
- (id)_infoFromCommandLine:(int)a0;
- (id)requestedAppName;
- (int)pid;
- (void)update;
- (unsigned int)task;
- (id)envVars;
- (unsigned int)platform;
- (id)platformName;
- (BOOL)isRunning;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (long long)compareByUserAppName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isZombie;
- (long long)compare:(id)a0;
- (id)description;
- (id)userAppName;
- (BOOL)isMachO;
- (void).cxx_destruct;
- (BOOL)isApp;
- (id)name;
- (BOOL)isNative;
- (BOOL)isCFM;

@end
