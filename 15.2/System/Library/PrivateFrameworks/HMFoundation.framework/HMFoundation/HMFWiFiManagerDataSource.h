@class NSString, NSObject;
@protocol OS_dispatch_queue, HMFWiFiManagerDataSourceDelegate;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource>

@property (class, readonly, copy, nonatomic) NSString *MACAddressString;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) struct __WiFiManagerClient { } *wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient { } *wifiDeviceReference;
@property (nonatomic) struct __WiFiNetwork { } *currentNetwork;
@property (weak, nonatomic) id<HMFWiFiManagerDataSourceDelegate> delegate;
@property (readonly, getter=isAssertionActive) BOOL assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) BOOL wowAsserted;
@property (readonly, copy, nonatomic) NSString *currentNetworkSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { } *)a0;
- (void)dealloc;
- (id)initWithWorkQueue:(id)a0;
- (void)performBlockAfterWoWReassertionDelay:(id /* block */)a0;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)handleWiFiLinkChangedWithEventDictionary:(id)a0;

@end
