@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AppletConfigurationData : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSUserDefaults *userDefaults;
    NSDictionary *config;
    NSMutableDictionary *pluginCache;
    unsigned long long maErrorCount;
    BOOL retryInProgress;
    double maMetadataQueryInterval;
}

+ (void)init;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getHerculesSettings;
+ (id)getWuluSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getExpressModeSettings;
+ (id)scriptForModule:(id)a0;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getNFCSettings;
+ (id)dataHash;
+ (id)getStaticConfig;

- (id)init;
- (void).cxx_destruct;
- (void)tsmScriptPerformed:(id)a0;

@end
