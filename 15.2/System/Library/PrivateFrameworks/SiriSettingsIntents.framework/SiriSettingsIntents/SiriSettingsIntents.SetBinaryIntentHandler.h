@interface SiriSettingsIntents.SetBinaryIntentHandler : NSObject <INSetBinarySettingIntentHandling> {
    void /* unknown type, empty encoding */ setHandlerProvider;
    void /* unknown type, empty encoding */ confirmationConfigProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSetBinarySetting:(id)a0 completion:(id /* block */)a1;
- (void)confirmSetBinarySetting:(id)a0 completion:(id /* block */)a1;

@end
