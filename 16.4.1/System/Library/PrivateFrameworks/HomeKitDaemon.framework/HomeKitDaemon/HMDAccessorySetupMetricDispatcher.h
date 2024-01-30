@class HMFTimer, NSString, HMDHomeManager, HMDHome;
@protocol HMDDeviceSetupTrackingInfo, HMMLogEventSubmitting, HMFCancellable;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging, HMEEventConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _submitted;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> _dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    id<HMFCancellable> _remoteEventRouterAssertion;
}

@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly) unsigned long long accessoryRemovedTime;
@property (readonly) id<HMDDeviceSetupTrackingInfo> trackingInfo;
@property (readonly) BOOL submitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void)submit;
- (void).cxx_destruct;
- (void)addHome:(id)a0;
- (id)initWithTrackingInfo:(id)a0 homeManager:(id)a1;
- (id)initWithTrackingInfo:(id)a0 homeManager:(id)a1 logEventDispatcher:(id)a2 timerFactory:(id /* block */)a3;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)addRemoteEventRouterAssertion:(id)a0;

@end
