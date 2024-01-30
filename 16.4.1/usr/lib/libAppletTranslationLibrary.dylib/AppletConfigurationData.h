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

+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getNFCSettings;
+ (id)scriptForModule:(id)a0;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getExpressModeSettings;
+ (id)getHerculesSettings;
+ (id)getSlalomSettings;
+ (id)getWuluSettings;
+ (id)pluginDecoderForMid:(id)a0;
+ (void)init;
+ (id)getStaticConfig;
+ (BOOL)setConfiguration:(id)a0;
+ (id)dataHash;

- (void)tsmScriptPerformed:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
