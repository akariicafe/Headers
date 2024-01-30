@class NSString, HDProfile, HKFeatureStatusManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HDHeartbeatSeriesFeatureStatusManagerDelegate;

@interface HDHeartbeatSeriesFeatureStatusManager : NSObject <HKFeatureStatusProvidingObserver> {
    HDProfile *_profile;
    id<HDHeartbeatSeriesFeatureStatusManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_heartNotificationsUserDefaults;
    HKFeatureStatusManager *_aFibBurdenFeatureStatusManager;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void)stopObservingChanges;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 aFibBurdenFeatureStatusManager:(id)a1 irregularRhythmNotificationsFeatureStatusManager:(id)a2 heartNotificationsUserDefaults:(id)a3;
- (void)_notifyDelegateOfCurrentState;
- (void)getPredominantFeatureWithCompletion:(id /* block */)a0;
- (void)notifyDelegateOfCurrentState;
- (id)predominantFeatureWithError:(id *)a0;
- (void)startObservingChangesWithDelegate:(id)a0;

@end
