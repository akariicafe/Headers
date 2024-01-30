@interface CSSiriLauncher : NSObject

+ (id)sharedLauncher;

- (void)notifyBuiltInVoiceTrigger:(id)a0 myriadPHash:(id)a1 completion:(id /* block */)a2;
- (void)notifyCarPlayVoiceTrigger:(id)a0 deviceId:(id)a1 myriadPHash:(id)a2 completion:(id /* block */)a3;
- (void)notifyBluetoothDeviceVoiceTrigger:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyRemoraVoiceTrigger:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)deactivateSiriActivationConnectionWithReason:(long long)a0 withOptions:(unsigned long long)a1;

@end
