@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject {
    NSMutableDictionary *_detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;

- (void)_loadPreloadBundles;
- (id)clientDetailsForIdentifier:(id)a0 applicationBundleURL:(id)a1;
- (id)findClientDetailsForIdentifier:(id)a0;
- (id)clientDetailsForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
