@interface SiriSettingsIntents.OpenIntentHandler : NSObject <INOpenSettingIntentHandling> {
    void /* unknown type, empty encoding */ enableTelemetryForSignpost;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleOpenSetting:(id)a0 completion:(id /* block */)a1;

@end
