@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (id)sharedInstance;
+ (void)initialize;
+ (double)threshold;
+ (id)identifier;
+ (id)errorWithDescription:(id)a0;
+ (id)subsystems;
+ (BOOL)willLog;
+ (int)defaultLogLevel;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (void)initializeSubsytem;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (BOOL)willLogDebug;
+ (BOOL)willLogInfo;
+ (id)wrapError:(id)a0 description:(id)a1;

@end
