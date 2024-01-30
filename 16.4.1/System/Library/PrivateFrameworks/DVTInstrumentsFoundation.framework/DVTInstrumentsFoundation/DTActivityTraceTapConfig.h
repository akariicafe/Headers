@class NSString, NSArray, NSURL, NSDate, NSDictionary;

@interface DTActivityTraceTapConfig : DTTapConfig

@property (copy, nonatomic) NSString *predicateString;
@property (nonatomic) BOOL onlySignposts;
@property (nonatomic) BOOL signpostsAndLogs;
@property (nonatomic) BOOL trackExpiredPIDs;
@property (nonatomic) BOOL excludeInfo;
@property (nonatomic) BOOL excludeDebug;
@property (nonatomic) BOOL includeSenderInfo;
@property (nonatomic) BOOL enableHTTPArchiveLogging;
@property (nonatomic) int targetPID;
@property (nonatomic) BOOL trackPIDToExecNameMapping;
@property (retain, nonatomic) NSURL *importedFileURL;
@property (retain, nonatomic) NSDate *importForcedStartDate;
@property (retain, nonatomic) NSDate *importForcedEndDate;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems;
@property (retain, nonatomic) NSDictionary *loggingSubsystemCategoryPairsToEnable;
@property (retain, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable;
@property (nonatomic) struct mach_timebase_info { unsigned int x0; unsigned int x1; } machTimebase;
@property (nonatomic) unsigned long long machContinuousStart;
@property (copy, nonatomic) id /* block */ memoHandler;
@property (copy, nonatomic) id /* block */ processDetectionCallback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isTargetAllProcesses;

@end
