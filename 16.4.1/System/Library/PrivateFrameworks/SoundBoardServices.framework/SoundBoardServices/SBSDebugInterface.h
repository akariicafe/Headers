@class NSXPCConnection;
@protocol SBSDebugInfoImplementer;

@interface SBSDebugInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSDebugInfoImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void)setVolume:(float)a0;
- (void)dealloc;
- (void)setFeatureFlags:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)render:(id)a0;
- (void)setWifiEnabled:(BOOL)a0;
- (void)sendLEDCommand:(id)a0;
- (void)setBootSpinner:(BOOL)a0;
- (void)setLEDContents:(id)a0;
- (void)clearHomeSWUpdate;
- (void)disassociateCurrentNetwork;
- (void)disassociateNetworkWithName:(id)a0;
- (void)getAllDebugInfo:(id /* block */)a0;
- (void)getFeatureFlags:(id /* block */)a0;
- (void)getLEDInfo:(id /* block */)a0;
- (void)getSelectDebugInfo:(id)a0 reply:(id /* block */)a1;
- (void)getTuningInfo:(id /* block */)a0;
- (void)getUserDefaults:(id /* block */)a0;
- (void)getVolume:(id /* block */)a0;
- (void)injectSWUpdateToHome:(id)a0;
- (void)playTone:(unsigned int)a0;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)a0;
- (void)sendButtonCommand:(id)a0;
- (void)setHomeUpdateState:(long long)a0;
- (void)setTuningInfoOnBox:(id)a0 at:(id)a1 withValue:(float)a2;
- (void)setUserDefaults:(id)a0 withValue:(id)a1;
- (void)siriSay:(id)a0;
- (void)stopTone:(unsigned int)a0;
- (void)suScanForSoftwareUpdate;
- (void)triggerWiFiCoreCapture:(id)a0;

@end
