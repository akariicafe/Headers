@class NSArray, NSDictionary, NSURL, NSPredicate, NSDate;

@interface DTOSLogLoaderPrepareTicket : DTOSLogLoaderTicket

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSURL *importedFileURL;
@property (retain, nonatomic) NSDate *importForcedStartDate;
@property (retain, nonatomic) NSDate *importForcedEndDate;
@property (nonatomic) unsigned long long machContinuousStart;
@property (nonatomic) BOOL trackPidToExecNameMapping;
@property (nonatomic) unsigned long long signpostConfig;
@property (nonatomic) unsigned long long exclusions;
@property (nonatomic) unsigned long long columnInclusions;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } machTimebase;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems;
@property (retain, nonatomic) NSDictionary *loggingSubsystemCategoryPairsToEnable;
@property (retain, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable;

- (void).cxx_destruct;
- (void)_setupLoaderForLoggedEventStore:(id)a0 agent:(id)a1 setDatesBasedOnSource:(BOOL)a2 genericFailureReason:(id)a3;
- (void)holdAgent:(id)a0 loader:(id)a1;

@end
