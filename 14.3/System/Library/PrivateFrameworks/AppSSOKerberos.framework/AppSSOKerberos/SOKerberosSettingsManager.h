@interface SOKerberosSettingsManager : NSObject {
    BOOL observingConfigurationChanges;
}

- (id)init;
- (void)dealloc;
- (void)configurationChanged:(id)a0;
- (void)saveKerberosValuesForPlugins;
- (void)listenForConfigurationChanges;

@end
