@interface SiriSettingsIntents.GetIntentHandler : NSObject <INGetSettingIntentHandling> {
    void /* unknown type, empty encoding */ settingIdentifierHandlers;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetSetting:(id)a0 completion:(id /* block */)a1;

@end
