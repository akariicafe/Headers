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
+ (id)getSlalomSettings;
+ (id)getHerculesSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (id)getWuluSettings;
+ (id)getExpressModeSettings;
+ (id)scriptForModule:(id)a0;
+ (id)dataHash;
+ (void)init;
+ (id)getNFCSettings;
+ (id)getStaticConfig;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)pluginDecoderForMid:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)tsmScriptPerformed:(id)a0;

@end
