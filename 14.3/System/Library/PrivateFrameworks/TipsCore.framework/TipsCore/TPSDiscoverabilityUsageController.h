@class NSString, TPSDuetDataProvider, NSSortDescriptor;

@interface TPSDiscoverabilityUsageController : NSObject {
    TPSDuetDataProvider *_duetProvider;
    NSString *_currentOSBuildVersion;
    NSString *_currentOSMajorVersion;
    NSSortDescriptor *_eventSortDescriptor;
}

+ (id)sharedInstance;

- (void)_invalidationDateForContentID:(id)a0 sinceDate:(id)a1 completion:(id /* block */)a2;
- (id)_majorVersionFilterPredicate;
- (void)_commonInit;
- (id)init;
- (id)_discoverabilityStream;
- (void).cxx_destruct;
- (id)_lastOfferedDateFilterPredicate;
- (void)_eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 lastOfferedContentID:(id)a3 completion:(id /* block */)a4;
- (id)_metaDataForUsageEvent:(id)a0;
- (id)_eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 setFrequencyControlOnTipStatus:(BOOL *)a3 error:(id *)a4;
- (id)firstEventMatchingUsageEventState:(long long)a0 fromEvents:(id)a1;
- (id)_eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 lastOfferedContentID:(id)a3 error:(id *)a4;
- (id)_invalidationDateForContentID:(id)a0 sinceDate:(id)a1 error:(id *)a2;
- (void)addContentUsageEvents:(id)a0 completion:(id /* block */)a1;
- (void)eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 completion:(id /* block */)a3;
- (id)_initWithDirectory:(id)a0;
- (id)_eventsPredicateForContentID:(id)a0 sinceDate:(id)a1;
- (id)_eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 fromEvents:(id)a3;
- (id)_majorVersionForBuildVersion:(id)a0;
- (id)eligibleContentForBundleID:(id)a0 context:(id)a1 preferredContentID:(id)a2 setFrequencyControlOnTipStatus:(BOOL *)a3 error:(id *)a4;

@end
