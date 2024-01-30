@class NSString, AACAwardsClient, HDProfile;

@interface AAPTriggerGenerator : NSObject <HDCurrentActivitySummaryHelperObserver, HDDataObserver, HDProfileReadyObserver> {
    AACAwardsClient *_awardsClient;
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (unsigned long long)_triggersForSummary:(id)a0 changedFields:(unsigned long long)a1;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)_notifyForUpdatedSummary:(id)a0 changedFields:(unsigned long long)a1;
- (id)initWithProfile:(id)a0 awardsClient:(id)a1;
- (void).cxx_destruct;

@end
