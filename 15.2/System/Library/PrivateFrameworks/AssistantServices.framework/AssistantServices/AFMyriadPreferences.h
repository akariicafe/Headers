@class AFInstanceContext, AFPreferences;

@interface AFMyriadPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    AFPreferences *_pref;
}

- (unsigned char)deviceGroup;
- (unsigned char)deviceClass;
- (void)setDeviceClass:(unsigned char)a0;
- (void).cxx_destruct;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1;
- (BOOL)coordinationEnabled;
- (BOOL)BLEActivityEnabled;
- (double)deviceSlowDown;
- (int)constantGoodnessScore;
- (float)deviceAdjust;
- (double)deviceDelay;
- (double)voiceTriggerEndtimeDelayThreshold;
- (BOOL)myriadServerHasProvisioned;
- (double)testDeviceDelay;
- (double)deviceTrumpDelay;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (BOOL)ignoreAdjustedBoost;
- (void)setIgnoreAdjustedBoost:(BOOL)a0;
- (void)setIgnorePlatformBias:(BOOL)a0;
- (BOOL)ignorePlatformBias;
- (void)setConstantGoodnessScore:(int)a0;
- (void)setDeviceAdjust:(float)a0;
- (void)setDeviceDelay:(double)a0;
- (void)setTestDeviceDelay:(double)a0;
- (void)setDeviceTrumpDelay:(double)a0;
- (void)enableCoordination:(BOOL)a0;
- (void)setDeviceSlowDown:(double)a0;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (void)setMaxNoOperationDelay:(double)a0;
- (double)maxNoOperationDelay;

@end
