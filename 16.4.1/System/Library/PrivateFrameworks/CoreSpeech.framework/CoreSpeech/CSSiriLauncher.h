@interface CSSiriLauncher : NSObject

+ (id)sharedLauncher;

- (void)deactivateSiriActivationConnectionWithReason:(long long)a0 withOptions:(unsigned long long)a1 withContext:(id)a2;
- (void)notifyBluetoothDeviceVoiceTrigger:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyBuiltInVoiceTrigger:(id)a0 myriadPHash:(id)a1 completion:(id /* block */)a2;
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)a0 completion:(id /* block */)a1;
- (void)notifyCarPlayVoiceTrigger:(id)a0 deviceId:(id)a1 myriadPHash:(id)a2 completion:(id /* block */)a3;
- (void)notifyCarPlayVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyDarwinVoiceTrigger:(id)a0 deviceId:(id)a1 myriadPHash:(id)a2 myriadLateActivationExpirationTime:(id)a3 completion:(id /* block */)a4;
- (void)notifyDarwinVoiceTriggerPrewarmWithCompletion:(id /* block */)a0;
- (void)notifyRemoraVoiceTrigger:(id)a0 myriadPHash:(id)a1 deviceId:(id)a2 completion:(id /* block */)a3;
- (void)notifyRemoraVoiceTriggerPrewarm:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)notifyWakeKeywordSpokenBluetoothDevice:(id)a0 deviceId:(id)a1;
- (void)notifyWakeKeywordSpokenCarPlay:(id)a0 deviceId:(id)a1;
- (void)notifyWakeKeywordSpokenInBuiltInMic:(id)a0;
- (void)notifyWakeKeywordSpokenRemora:(id)a0 deviceId:(id)a1;

@end
