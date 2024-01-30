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

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)resumeLQMCallbackMonitoring;
- (struct __WiFiDeviceClient { } *)wifiDevice;
- (void)setWifiDevice:(struct __WiFiDeviceClient { } *)a0;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (id)bssidForInterfaceWithName:(id)a0;
- (id)getAWDLPeerList;
- (BOOL)manualJoinInfoForNetwork:(struct __WiFiNetwork { } *)a0;
- (void)_wifiDevicesRefresh;
- (void)checkForLQMAsystole;
- (id)awdlPeerList;
- (void)processAsystoleDeclaration;
- (struct __WiFiManagerClient { } *)wifiManager;
- (void).cxx_destruct;
- (void)unregisterForCallbacks;
- (id)init;
- (void)handleAWDLStateChange:(id)a0;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (long long)phyModeForInterfaceWithName:(id)a0;
- (id)ssidForInterfaceWithName:(id)a0;
- (BOOL)_shouldRegisterForLQMCallbacks;
- (void)checkForLQMCallbackRegistration;
- (void)_registerForLQMCallbacks;
- (void)setAWDLDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_triggerDisconnectEdge:(id)a0;
- (void)dealloc;
- (id)refreshAssociationInfo;
- (id)associationInfoForWiFiNetwork:(struct __WiFiNetwork { } *)a0;
- (void)changeLQMMonitoring;
- (void)suspendLQMCallbackMonitoring;
- (void)_delayedRegisterForLQMCallbacks;
- (void)_unregisterForLQMCallbacks;
- (void)_setLQMEventInterval:(int)a0;
- (void)registerForCallbacks;
- (void)checkForLQMBradycardia;
- (void)_setAWDLLinkUp:(BOOL)a0;

@end
