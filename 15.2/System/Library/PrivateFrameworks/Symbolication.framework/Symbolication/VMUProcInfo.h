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
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;

+ (id)getProcessIds;
+ (int)processParentId:(int)a0;
+ (BOOL)isProcessRunning:(int)a0;

- (BOOL)isNative;
- (id)valueForEnvVar:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)terminate;
- (id)initWithTask:(unsigned int)a0;
- (id)firstArgument;
- (long long)compareByUserAppName:(id)a0;
- (BOOL)signal:(int)a0;
- (unsigned int)task;
- (id)userAppName;
- (int)cpuType;
- (struct timeval { long long x0; int x1; })startTime;
- (id)requestedAppName;
- (unsigned int)platform;
- (id)arguments;
- (BOOL)isRunning;
- (id)initWithPid:(int)a0;
- (id)description;
- (id)envVars;
- (void)update;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_infoFromCommandLine:(int)a0;
- (id)procTableName;
- (BOOL)isCFM;
- (id)name;
- (id)platformName;
- (unsigned long long)hash;
- (void)dealloc;
- (int)ppid;
- (id)realAppName;
- (int)pid;
- (long long)compareByName:(id)a0;
- (BOOL)isMachO;
- (BOOL)isApp;

@end
