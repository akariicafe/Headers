@interface SiriSettingsIntents.SetBinaryIntentHandler : NSObject <INSetBinarySettingIntentHandling> {
    void /* unknown type, empty encoding */ setHandlerProvider;
    void /* unknown type, empty encoding */ confirmationConfigProvider;
    void /* unknown type, empty encoding */ settingsFeatureFlags;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetBinarySetting:(id)a0 completion:(id /* block */)a1;
- (void)handleSetBinarySetting:(id)a0 completion:(id /* block */)a1;

@end
