@class NSString, NSRegularExpression, NSFileHandle, NSLock;

@interface SBKLogger : NSObject {
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    int _pid;
    NSString *_procName;
    NSRegularExpression *_runtimeOverrideRegex;
    NSLock *_lock;
}

@property (copy, nonatomic) NSString *filter;
@property (copy, nonatomic) NSString *runtimeOverride;

+ (BOOL)verboseLoggingEnabled;
+ (id)sharedLogger;
+ (BOOL)debugLoggingEnabled;

- (void).cxx_destruct;
- (id)init;
- (id)auxPath;
- (void)dealloc;
- (void)logString:(id)a0;
- (void)logFile:(const char *)a0 lineNumber:(int)a1 format:(id)a2;
- (void)setAuxPath:(id)a0;
- (BOOL)shouldOverrideCondition:(id)a0 file:(id)a1;
- (void)logFunction:(const char *)a0 format:(id)a1;
- (void)addRuntimeOverride:(id)a0;
- (void)removeRuntimeOverride:(id)a0;
- (void)_updateSettingsFromPreferences:(id)a0;
- (void)performLoggingBlock:(id /* block */)a0;

@end
