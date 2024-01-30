@class NSString, NSMutableDictionary, WiFiUsageInterfaceStats, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiUsageMonitor : NSObject {
    BOOL _isSystemAwake;
    BOOL _deviceLocked;
    BOOL _displayOn;
    BOOL _deviceCharging;
    BOOL _inMotion;
    BOOL _inVehicle;
    BOOL _inActiveCall;
    BOOL _inMediaPlayback;
    unsigned long long _hidCount;
    BOOL _inActiveA2dp;
    BOOL _inActiveSco;
    BOOL _inActiveAwdl;
    BOOL _inActiveRoam;
    BOOL _inActiveScan;
    BOOL _poweredOn;
    BOOL _controlCenterEnabled;
    BOOL _cellularFallbackEnabled;
    NSString *_secondaryInterfaceName;
    NSMutableDictionary *_usageSessions;
    NSMutableDictionary *_connectedNetworks;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _privacyRestrictionDisabled;
    id /* block */ _completionHandler;
    void *_completionContext;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    WiFiUsageInterfaceStats *_ifStatsAtLastLqmUpdate;
}

+ (id)sharedInstance;

- (void)setCallState:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSoftApClientEvent:(BOOL)a0 identifier:(id)a1 isAppleClient:(BOOL)a2 isInstantHotspot:(BOOL)a3 isAutoHotspot:(BOOL)a4 isHidden:(BOOL)a5;
- (void)addSoftApCoexEvent:(unsigned long long)a0 deniedUnii1ChannelMap:(unsigned long long)a1 deniedUnii2aChannelMap:(unsigned long long)a2 deniedUnii2cChannelMap:(unsigned long long)a3 deniedUnii3ChannelMap:(unsigned long long)a4;
- (void)setDeviceLockState:(BOOL)a0;
- (void)setDisplayState:(BOOL)a0;
- (void)setMotionState:(BOOL)a0 andVehicularState:(BOOL)a1;
- (void)setMediaState:(BOOL)a0;
- (void)setDeviceChargingState:(BOOL)a0;
- (void)setSecondaryInterfaceName:(id)a0;
- (BOOL)submitAnalytics:(id)a0;
- (void)setCompletionHandler:(id /* block */)a0 withContext:(void *)a1 onQueue:(id)a2;
- (void)setPrivacyRestrictionDisabled:(BOOL)a0;
- (void)initializeDeviceLockState:(BOOL)a0 displayState:(BOOL)a1 motionState:(BOOL)a2 vehicularState:(BOOL)a3 callState:(BOOL)a4 mediaState:(BOOL)a5 chargingState:(BOOL)a6 andSecondaryInterfaceName:(id)a7;
- (void)startMonitoringWiFiInterface:(id)a0;
- (void)setSystemWakeState:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (void)setCurrentApplicationName:(id)a0 withAttributes:(id)a1;
- (void)setJoinEvent:(BOOL)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4 forInterface:(id)a5;
- (void)setLinkEvent:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4 forInterface:(id)a5;
- (void)updateLinkQuality:(id)a0 andDataStats:(id)a1 forInterface:(id)a2;
- (void)setPowerBudget:(long long)a0 andThermalIndex:(long long)a1 forInterface:(id)a2;
- (void)setBluetoothState:(BOOL)a0 connectedDeviceCount:(unsigned long long)a1 inA2dp:(BOOL)a2 inSco:(BOOL)a3;
- (void)setAwdlState:(BOOL)a0 inMode:(long long)a1;
- (void)setSoftApState:(BOOL)a0 requester:(id)a1 status:(id)a2 changeReason:(id)a3 channelNumber:(unsigned long long)a4 countryCode:(unsigned long long)a5 isHidden:(BOOL)a6 isInfraConnected:(BOOL)a7 isAwdlUp:(BOOL)a8 lowPowerModeDuration:(double)a9 compatibilityMode:(BOOL)a10;
- (void)setRoamingState:(BOOL)a0 reason:(unsigned long long)a1 andStatus:(long long)a2 forInterface:(id)a3;
- (void)setScanningState:(BOOL)a0 client:(unsigned long long)a1 neighborBSS:(id)a2 otherBSS:(id)a3 forInterface:(id)a4;
- (void)setPowerState:(BOOL)a0 forInterface:(id)a1;
- (void)setControlCenterState:(BOOL)a0 withKnownLocation:(BOOL)a1 forInterface:(id)a2;
- (void)setCellularFallbackState:(BOOL)a0 forInterface:(id)a1;
- (void)addFaultEvent:(unsigned long long)a0 forInterface:(id)a1;
- (void)addTriggerDisconnectEvent:(id)a0 isAlerted:(BOOL)a1 isConfirmed:(BOOL)a2 isExecuted:(BOOL)a3;
- (id)summaryForInterface:(id)a0;

@end
