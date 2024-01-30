@class HMAudioAnalysisLastKnownEventSubscriber, NSArray, NSMutableDictionary, NSMutableSet, NSString, DIDropInCenter, HMHome;
@protocol HUDropInBannerItemProviderDelegate;

@interface HUDropInBannerItemProvider : HFItemProvider <DIDropInCenterDelegate, DIDeviceManagerDelegate, DIDeviceDelegate, HMAudioAnalysisLastKnownEventSubscriberDelegate, HFExecutionEnvironmentObserver>

@property (retain, nonatomic) NSMutableSet *bannerItems;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) DIDropInCenter *dropInCenter;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) HMAudioAnalysisLastKnownEventSubscriber *lastKnownEventSubscriber;
@property (retain, nonatomic) NSMutableDictionary *accessoryIdentifierToEventBulletinsMapping;
@property (weak, nonatomic) id<HUDropInBannerItemProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyDelegate;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (void)subscriber:(id)a0 didUpdateBulletins:(id)a1;
- (void)_setupDropInDelegatesIfNeeded;
- (void)device:(id)a0 didUpdateState:(long long)a1;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (id)invalidationReasons;
- (void)manager:(id)a0 didAddDevice:(id)a1;
- (void)manager:(id)a0 didRemoveDevice:(id)a1;
- (void)managerDidUpdateDevices:(id)a0;
- (void)serverDisconnectedForDropInCenter:(id)a0;

@end
