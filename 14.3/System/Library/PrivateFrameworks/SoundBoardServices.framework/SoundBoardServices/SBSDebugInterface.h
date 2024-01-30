@class NSXPCConnection;
@protocol SBSDebugInfoImplementer;

@interface SBSDebugInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSDebugInfoImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void)setFeatureFlags:(id)a0;
- (id)init;
- (void).cxx_destruct;
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

@end
