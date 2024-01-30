@class NSString, PETDistributionEventTracker;

@interface SBIconPageHidingMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETDistributionEventTracker *_pagesHiddenTracker;
    PETDistributionEventTracker *_pagesVisibleTracker;
    PETDistributionEventTracker *_pagesTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;

@end
