@interface SiriSettingsIntents.SetNumericIntentHandler : NSObject <INSetNumericSettingIntentHandling> {
    void /* unknown type, empty encoding */ setHandlerProvider;
    void /* unknown type, empty encoding */ confirmationConfigProvider;
    void /* unknown type, empty encoding */ setupHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetNumericSetting:(id)a0 completion:(id /* block */)a1;
- (void)handleSetNumericSetting:(id)a0 completion:(id /* block */)a1;

@end
