@class AFInstanceContext, AFPreferences;

@interface AFMyriadPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    AFPreferences *_pref;
}

- (void)setDeviceClass:(unsigned char)a0;
- (double)deviceTrumpDelay;
- (unsigned char)deviceClass;
- (BOOL)myriadServerHasProvisioned;
- (unsigned char)deviceGroup;
- (void).cxx_destruct;
- (BOOL)BLEActivityEnabled;
- (void)setDeviceDelay:(double)a0;
- (double)testDeviceDelay;
- (int)constantGoodnessScore;
- (BOOL)coordinationEnabled;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (float)deviceAdjust;
- (double)deviceDelay;
- (double)deviceSlowDown;
- (void)enableCoordination:(BOOL)a0;
- (BOOL)ignoreAdjustedBoost;
- (BOOL)ignorePlatformBias;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1;
- (double)maxNoOperationDelay;
- (void)setConstantGoodnessScore:(int)a0;
- (void)setDeviceAdjust:(float)a0;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (void)setDeviceSlowDown:(double)a0;
- (void)setDeviceTrumpDelay:(double)a0;
- (void)setIgnoreAdjustedBoost:(BOOL)a0;
- (void)setIgnorePlatformBias:(BOOL)a0;
- (void)setMaxNoOperationDelay:(double)a0;
- (void)setTestDeviceDelay:(double)a0;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (double)voiceTriggerEndtimeDelayThreshold;

@end
