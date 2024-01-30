@interface CSSiriLauncher : NSObject

+ (id)sharedLauncher;

- (void)notifyCarPlayVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)a0 completion:(id /* block */)a1;
- (void)notifyBuiltInVoiceTrigger:(id)a0 myriadPHash:(id)a1 completion:(id /* block */)a2;
- (void)notifyWakeKeywordSpokenInBuiltInMic:(id)a0;
- (void)notifyCarPlayVoiceTrigger:(id)a0 deviceId:(id)a1 myriadPHash:(id)a2 completion:(id /* block */)a3;
- (void)notifyWakeKeywordSpokenCarPlay:(id)a0 deviceId:(id)a1;
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyBluetoothDeviceVoiceTrigger:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyWakeKeywordSpokenBluetoothDevice:(id)a0 deviceId:(id)a1;
- (void)notifyRemoraVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyRemoraVoiceTrigger:(id)a0 myriadPHash:(id)a1 deviceId:(id)a2 completion:(id /* block */)a3;
- (void)notifyWakeKeywordSpokenRemora:(id)a0 deviceId:(id)a1;
- (void)deactivateSiriActivationConnectionWithReason:(long long)a0 withOptions:(unsigned long long)a1;

@end
