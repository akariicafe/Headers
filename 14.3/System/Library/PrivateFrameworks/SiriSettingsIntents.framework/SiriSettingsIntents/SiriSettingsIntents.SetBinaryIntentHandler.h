@interface SiriSettingsIntents.SetBinaryIntentHandler : NSObject <INSetBinarySettingIntentHandling> {
    void /* unknown type, empty encoding */ setHandlerProvider;
    void /* unknown type, empty encoding */ confirmationConfigProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSetBinarySetting:(id)a0 completion:(id /* block */)a1;
- (void)confirmSetBinarySetting:(id)a0 completion:(id /* block */)a1;

@end
