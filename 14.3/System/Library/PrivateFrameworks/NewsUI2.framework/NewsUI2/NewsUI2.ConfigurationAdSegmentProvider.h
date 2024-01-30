@interface NewsUI2.ConfigurationAdSegmentProvider : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ needsUpdate;
    void /* unknown type, empty encoding */ appConfigurationManager;
}

- (void)configurationManagerSignificantAppConfigChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
