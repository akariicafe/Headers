@class FBSDisplayLayoutMonitorConfiguration;

@interface CDMAppNLModelProvider : NSObject {
    FBSDisplayLayoutMonitorConfiguration *_frontboardConfig;
}

+ (id)getSystemDataConfiguration:(id)a0 bundlePath:(id)a1 error:(id *)a2;
+ (id)getCoreModelConfigurationForLocale:(id)a0 bundlePath:(id)a1 error:(id *)a2;
+ (id)createModelConfigurationsFromURLs:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)createModelConfigurationFromURL:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)modelURLsForInstalledApps;
+ (id)retrieveAllAppBundleURLs;
+ (id)retrieveModelURLFromBundleURL:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)getModelConfigsForLocale:(id)a0 error:(id *)a1;
- (id)getForegroundModelConfigForLocale:(id)a0 error:(id *)a1;
- (id)getModelURLs:(id *)a0;
- (id)getModelURLForForegroundApp;
- (id)getModelURLsFromDefaults;
- (id)foregroundBundeIdentifiers;

@end
