@class FBSDisplayLayoutMonitorConfiguration;

@interface CDMUaaPNLModelProvider : NSObject {
    FBSDisplayLayoutMonitorConfiguration *_frontboardConfig;
}

+ (id)createModelConfigurationFromURL:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)createModelConfigurationsFromURLs:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)getCoreModelConfigurationForLocale:(id)a0 bundlePath:(id)a1 error:(id *)a2;
+ (id)modelURLsForInstalledApps;
+ (id)retrieveAllAppBundleURLs;
+ (id)retrieveModelURLFromBundleURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getModelConfigsForLocale:(id)a0 error:(id *)a1;
- (id)foregroundBundeIdentifiers;
- (id)getForegroundModelConfigForLocale:(id)a0 error:(id *)a1;
- (id)getModelURLForForegroundApp;
- (id)getModelURLs:(id *)a0;
- (id)getModelURLsFromDefaults;

@end
