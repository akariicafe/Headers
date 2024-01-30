@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

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
@property (retain, nonatomic) NSMutableSet *delegates;
@property (readonly) BOOL awdlLinkUp;
@property (nonatomic) BOOL monitorLQMBradycardia;

+ (id)sharedInstance;

- (id)refreshAssociationInfo;
- (void)checkForLQMBradycardia;
- (void)_triggerDisconnectEdge:(id)a0;
- (void)_delayedRegisterForLQMCallbacks;
- (void)_setAWDLLinkUp:(BOOL)a0;
- (void)_unregisterForLQMCallbacks;
- (void)handleAWDLStateChange:(id)a0;
- (struct __WiFiDeviceClient { } *)wifiDevice;
- (void)setWifiDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)registerForCallbacks;
- (void)setAWDLDevice:(struct __WiFiDeviceClient { } *)a0;
- (id)associationInfoForWiFiNetwork:(struct __WiFiNetwork { } *)a0;
- (void)resumeLQMCallbackMonitoring;
- (BOOL)manualJoinInfoForNetwork:(struct __WiFiNetwork { } *)a0;
- (BOOL)isApplePersonalHotspot;
- (struct __WiFiManagerClient { } *)wifiManager;
- (id)bssidForInterfaceWithName:(id)a0;
- (void)suspendLQMCallbackMonitoring;
- (void)_wifiDevicesRefresh;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (void)dealloc;
- (void)processAsystoleDeclaration;
- (void)addDelegate:(id)a0;
- (BOOL)_shouldRegisterForLQMCallbacks;
- (long long)phyModeForInterfaceWithName:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setLQMEventInterval:(int)a0;
- (id)ssidForInterfaceWithName:(id)a0;
- (void)checkForLQMCallbackRegistration;
- (void)unregisterForCallbacks;
- (id)awdlPeerList;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)changeLQMMonitoring;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (void)_registerForLQMCallbacks;
- (void)checkForLQMAsystole;
- (id)getAWDLPeerList;
- (void).cxx_destruct;

@end
