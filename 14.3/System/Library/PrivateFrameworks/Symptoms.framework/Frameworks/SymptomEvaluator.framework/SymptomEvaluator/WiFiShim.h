@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiShimDelegate;

@interface WiFiShim : NSObject {
    struct __WiFiManagerClient { } *_wifiManager;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _registeredForCallbacks;
    unsigned char _lqmCallbackRegistrationAttempts;
    double _lqmCallbackLastRegistered;
    id _tdObserver;
}

@property (nonatomic) unsigned char lqmCallbacks;
@property (nonatomic) unsigned char lqmCallbackThreshold;
@property (nonatomic) unsigned char lqmBradycardia;
@property (nonatomic) int lqmEventInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasAssociation;
@property (nonatomic) BOOL apIsAwake;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *lqmCallbackTimer;
@property (nonatomic) BOOL lqmCallbackTimerResumed;
@property (nonatomic) double lqmBradycardiaLastCalled;
@property (nonatomic) double lqmAsystoleLastCalled;
@property (nonatomic) double lqmCallbackLastTimestamp;
@property (retain, nonatomic) NSDictionary *awdlStateDict;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *awdlTimer;
@property (nonatomic) long long awdlTimerCount;
@property (nonatomic) char awdlLinkState;
@property (nonatomic) struct __WiFiDeviceClient { } *awdlDevice;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (retain, nonatomic) id<WiFiShimDelegate> delegate;
@property (readonly) BOOL awdlLinkUp;
@property (nonatomic) BOOL monitorLQMBradycardia;

+ (id)sharedInstance;

- (struct __WiFiManagerClient { } *)wifiManager;
- (void)changeLQMMonitoring;
- (void)_delayedRegisterForLQMCallbacks;
- (id)init;
- (void)_registerForLQMCallbacks;
- (void)_wifiDevicesRefresh;
- (void)checkForLQMCallbackRegistration;
- (void).cxx_destruct;
- (void)registerForCallbacks;
- (void)dealloc;
- (void)processAsystoleDeclaration;
- (void)suspendLQMCallbackMonitoring;
- (id)getAWDLPeerList;
- (void)checkForLQMAsystole;
- (struct __WiFiDeviceClient { } *)wifiDevice;
- (void)resumeLQMCallbackMonitoring;
- (void)handleAWDLStateChange:(id)a0;
- (void)setAWDLDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)_setLQMEventInterval:(int)a0;
- (void)_setAWDLLinkUp:(BOOL)a0;
- (BOOL)_shouldRegisterForLQMCallbacks;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (void)_unregisterForLQMCallbacks;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (void)_triggerDisconnectEdge:(id)a0;
- (void)checkForLQMBradycardia;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setWifiDevice:(struct __WiFiDeviceClient { } *)a0;
- (id)awdlPeerList;
- (id)ssidForInterfaceWithName:(id)a0;
- (void)unregisterForCallbacks;
- (id)bssidForInterfaceWithName:(id)a0;
- (long long)phyModeForInterfaceWithName:(id)a0;

@end
