@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)identifier;
+ (double)threshold;
+ (id)subsystems;
+ (id)errorWithDescription:(id)a0;
+ (BOOL)willLog;
+ (BOOL)willLogInfo;
+ (void)initializeSubsytem;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (id)wrapError:(id)a0 description:(id)a1;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (int)defaultLogLevel;
+ (BOOL)willLogDebug;

@end
