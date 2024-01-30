@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionPlugInBundleManager : NSObject {
    NSMutableDictionary *_intentsSupported;
    NSObject<OS_dispatch_queue> *_intentsSupportedQueue;
    NSDictionary *_pluginsPlistDictionary;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)extensionForIntent:(id)a0;
- (id)_extensionPlugInBundleForIntent:(id)a0 bundleIdentifier:(id)a1;
- (void)_setExtensionPlugInBundle:(id)a0 forIntent:(id)a1 bundleIdentifier:(id)a2;
- (BOOL)loadBundleForBundleIdentifier:(id)a0 wasPrewarmed:(BOOL *)a1;
- (BOOL)_registerBundle:(id)a0 bundleIdentifier:(id)a1;

@end
