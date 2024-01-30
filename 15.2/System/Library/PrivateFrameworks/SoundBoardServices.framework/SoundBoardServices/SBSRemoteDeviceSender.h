@class NSObject, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface SBSRemoteDeviceSender : NSObject <SBSImplementer>

@property (retain) RPCompanionLinkClient *client;
@property (retain) NSObject<OS_dispatch_queue> *rapportQueue;
@property (retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVolume:(float)a0;
- (id)initWithDevice:(id)a0;
- (void)setFeatureFlags:(id)a0;
- (void)setWifiEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;
- (void)obliterate:(id)a0;
- (void)reboot:(id)a0;
- (void)getAllDebugInfo:(id /* block */)a0;
- (void)getSelectDebugInfo:(id)a0 reply:(id /* block */)a1;
- (void)getTuningInfo:(id /* block */)a0;
- (void)setTuningInfoOnBox:(id)a0 at:(id)a1 withValue:(float)a2;
- (void)playTone:(unsigned int)a0;
- (void)stopTone:(unsigned int)a0;
- (void)getUserDefaults:(id /* block */)a0;
- (void)setUserDefaults:(id)a0 withValue:(id)a1;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)a0;
- (void)getLEDInfo:(id /* block */)a0;
- (void)sendLEDCommand:(id)a0;
- (void)setLEDContents:(id)a0;
- (void)triggerWiFiCoreCapture:(id)a0;
- (void)sendButtonCommand:(id)a0;
- (void)injectSWUpdateToHome:(id)a0;
- (void)setBootSpinner:(BOOL)a0;
- (void)disassociateCurrentNetwork;
- (void)disassociateNetworkWithName:(id)a0;
- (void)getFeatureFlags:(id /* block */)a0;
- (void)suScanForSoftwareUpdate;
- (void)getVolume:(id /* block */)a0;
- (void)handoffStart;
- (void)handoffUpdateIntensity:(float)a0;
- (void)handoffCancel;
- (void)handoffSetDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;
- (void)handoffComplete;
- (void)requestDeferredReboot;
- (void)identifyWithOptions:(id)a0;
- (void)intercomWithOptions:(id)a0;
- (void)setAppleCareIsEnabled:(BOOL)a0 withOptions:(id)a1;
- (void)siriUtteranceFileToBePlayed:(id)a0 duckMusic:(BOOL)a1 reply:(id /* block */)a2;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)a0;
- (BOOL)isMediaAlarm:(id)a0;
- (void)isDeviceStereoFollower:(id /* block */)a0;
- (void)sysdiagnoseHasStarted:(BOOL)a0;
- (void)getPowerEstimateForInterval:(float)a0 reply:(id /* block */)a1;
- (void)getInstalledProfiles:(id /* block */)a0;
- (void)removeProfileByIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;

@end
