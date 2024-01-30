@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject {
    NSMutableDictionary *_detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;

- (id)clientDetailsForIdentifier:(id)a0 applicationBundleURL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_loadPreloadBundles;
- (id)findClientDetailsForIdentifier:(id)a0;
- (id)clientDetailsForIdentifier:(id)a0;

@end
