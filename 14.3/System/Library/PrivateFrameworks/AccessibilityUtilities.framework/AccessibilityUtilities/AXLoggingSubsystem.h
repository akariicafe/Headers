@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (id)sharedInstance;
+ (void)initialize;
+ (double)threshold;
+ (BOOL)willLog;
+ (id)subsystems;
+ (void)initializeSubsytem;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (id)wrapError:(id)a0 description:(id)a1;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (int)defaultLogLevel;
+ (BOOL)willLogInfo;
+ (BOOL)willLogDebug;
+ (id)errorWithDescription:(id)a0;
+ (id)identifier;

@end
