@class NSDate, NSData, NSArray, NSURL, NSPredicate, DTOSLogLoader, XRMobileAgentDock, NSDictionary, NSError;

@interface DTActivityTraceTapLocalShuttle : XRMobileAgent <DTOSLogLoaderVisitor> {
    id _commonFetchTicket;
}

@property (nonatomic) BOOL didPrepare;
@property (nonatomic) BOOL shouldStart;
@property (nonatomic) BOOL didStart;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) BOOL didStop;
@property (nonatomic) BOOL shouldFetch;
@property (nonatomic) unsigned long long signpostConfig;
@property (nonatomic) unsigned long long exclusions;
@property (nonatomic) unsigned long long columnInclusions;
@property (nonatomic) unsigned long long logLoaderMode;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } machTimebase;
@property (nonatomic) unsigned long long machContinuousStart;
@property (retain, nonatomic) NSURL *importedFileURL;
@property (retain, nonatomic) NSDate *importForcedStartDate;
@property (retain, nonatomic) NSDate *importForcedEndDate;
@property (copy, nonatomic) id /* block */ processDetectionCallback;
@property (retain, nonatomic) NSArray *dynamicTracingEnabledSubsystems;
@property (retain, nonatomic) NSDictionary *loggingSubsystemCategoryPairsToEnable;
@property (retain, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable;
@property (nonatomic) double fetchWindow;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) DTOSLogLoader *loaderStop;
@property (retain, nonatomic) XRMobileAgentDock *ownersDock;
@property (retain, nonatomic) NSData *nextOutputBytes;
@property (nonatomic, getter=isFetchComplete) BOOL fetchComplete;
@property (nonatomic) unsigned long long lastMachContinuousTime;
@property (nonatomic) unsigned int lostEventsSinceLastVisit;
@property (retain, nonatomic) NSError *failureReason;

- (void).cxx_destruct;
- (void)addPidToExecEntriesFromMapping:(id)a0;
- (void)executeStopOnItinerary:(id)a0;

@end
