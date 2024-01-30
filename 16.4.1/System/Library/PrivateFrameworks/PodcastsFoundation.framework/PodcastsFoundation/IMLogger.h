@class NSString, NSRegularExpression, NSFileHandle;

@interface IMLogger : NSObject {
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    int _pid;
    NSString *_procName;
    BOOL _logTofileOnly;
    NSRegularExpression *_runtimeOverrideRegex;
}

@property (copy, nonatomic) NSString *filter;
@property (copy) NSString *runtimeOverride;

+ (id)sharedLogger;
+ (id)rolledLogPrefix;
+ (void)deleteRolledLogsForLogPath:(id)a0 maxAge:(double)a1;
+ (void)rollLogPath:(id)a0 maxSize:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)logString:(id)a0;
- (id)auxPath;
- (void)addRuntimeOverride:(id)a0;
- (void)logFile:(const char *)a0 lineNumber:(int)a1 format:(id)a2;
- (void)logFunction:(const char *)a0 format:(id)a1;
- (BOOL)logTofileOnly;
- (void)removeRuntimeOverride:(id)a0;
- (void)setAuxPath:(id)a0;
- (void)setLogToFileOnly:(BOOL)a0;
- (BOOL)shouldOverrideCondition:(id)a0 file:(id)a1;

@end
