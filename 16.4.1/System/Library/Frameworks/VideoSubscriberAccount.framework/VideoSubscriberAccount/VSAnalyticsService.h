@class MTMetricsKit, NSObject, VSPreferences, NSString, AMSBag, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VSAnalyticsService : VSServiceListener <VSManagedProfileConnectionObserver, MTBaseEventDataProviderDelegate, VSAnalyticsServiceProtocol>

@property (retain, nonatomic) MTMetricsKit *mainMetricsKit;
@property (retain, nonatomic) AMSBag *bag;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property BOOL didBuddyComplete;
@property BOOL optedIn;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)windowOuterHeight:(id)a0;
- (void)recordMetricsCenterClickEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (id)hardwareModel:(id)a0;
- (id)resourceRevNum:(id)a0;
- (void)recordMetricsCenterExitEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (id)pageUrl:(id)a0;
- (id)capacityData:(id)a0;
- (id)isSignedIn:(id)a0;
- (void)recordMetricsCenterFlexibleEventWithName:(id)a0 data:(id)a1;
- (id)capacityDisk:(id)a0;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)a0;
- (void)onBuddyComplete;
- (id)capacityDataAvailable:(id)a0;
- (id)xpPostFrequency:(id)a0;
- (void)recordFederatedPunchoutEventWithError:(id)a0 metadata:(id)a1;
- (void)recordMetricsCenterEnterEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (id)screenHeight:(id)a0;
- (id)capacitySystem:(id)a0;
- (id)pixelRatio:(id)a0;
- (id)connection:(id)a0;
- (id)capacitySystemAvailable:(id)a0;
- (void)publishMetricsKitEventWithData:(id)a0;
- (id)windowOuterWidth:(id)a0;
- (id)xpSendMethod:(id)a0;
- (id)screenWidth:(id)a0;
- (id)init;
- (id)dsId:(id)a0;
- (void)profileConnectionSettingsChanged:(id)a0;
- (id)windowInnerWidth:(id)a0;
- (id)clientId:(id)a0;
- (id)windowInnerHeight:(id)a0;
- (void).cxx_destruct;

@end
