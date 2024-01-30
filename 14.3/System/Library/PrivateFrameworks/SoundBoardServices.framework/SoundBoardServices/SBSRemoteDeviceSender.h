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

- (id)initWithDevice:(id)a0;
- (void)setFeatureFlags:(id)a0;
- (void).cxx_destruct;
- (void)reboot:(id)a0;
- (void)obliterate:(id)a0;
- (void)getAllDebugInfo:(id /* block */)a0;
- (void)getTuningInfo:(id /* block */)a0;
- (void)setTuningInfoOnBox:(id)a0 at:(id)a1 withValue:(float)a2;
- (void)playTone:(unsigned int)a0;
- (void)stopTone:(unsigned int)a0;
- (void)getUserDefaults:(id /* block */)a0;
- (void)setUserDefaults:(id)a0 withValue:(id)a1;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)a0;
- (void)sendLEDCommand:(id)a0;
- (void)triggerWiFiCoreCapture:(id)a0;
- (void)sendButtonCommand:(id)a0;
- (void)injectSWUpdateToHome:(id)a0;
- (void)setBootSpinner:(BOOL)a0;
- (void)getFeatureFlags:(id /* block */)a0;
- (void)setLEDContents:(id)a0;
- (void)handoffSetDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;
- (void)handoffStart:(id /* block */)a0;
- (void)handoffInterruption:(id /* block */)a0;
- (void)handoffUpdateIntensity:(float)a0;
- (void)handoffCancel;
- (void)handoffComplete;
- (void)requestDeferredReboot;
- (void)identifyWithOptions:(id)a0;
- (void)setAppleCareIsEnabled:(BOOL)a0 withOptions:(id)a1;
- (void)siriUtteranceFileToBePlayed:(id)a0 duckMusic:(BOOL)a1 reply:(id /* block */)a2;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)a0;
- (BOOL)isMediaAlarm:(id)a0;
- (void)homeKitSettingForKeyPathChanged:(id)a0 updatedValue:(id)a1 completion:(id /* block */)a2;
- (void)deviceAttributeChanged:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)setDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;
- (void)sysdiagnoseHasStarted:(BOOL)a0;

@end
