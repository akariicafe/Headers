@interface SiriSettingsIntents.SetNumericIntentHandler : NSObject <INSetNumericSettingIntentHandling> {
    void /* unknown type, empty encoding */ setHandlerProvider;
    void /* unknown type, empty encoding */ confirmationConfigProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSetNumericSetting:(id)a0 completion:(id /* block */)a1;
- (void)confirmSetNumericSetting:(id)a0 completion:(id /* block */)a1;

@end
