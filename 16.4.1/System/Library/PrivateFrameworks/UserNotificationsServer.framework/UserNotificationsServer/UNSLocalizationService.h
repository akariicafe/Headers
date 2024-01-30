@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSLocalizationService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bundleIdentifierToBundle;
    NSMutableDictionary *_bundleIdentifierToBundleURL;
}

- (void)notificationSourcesDidUninstall:(id)a0;
- (id)_queue_bundleWithIdentifier:(id)a0;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)_queue_notificationSourcesDidInstall:(id)a0;
- (void)_queue_unloadBundleWithIdentifier:(id)a0;
- (void)notificationSourcesDidInstall:(id)a0;
- (id)init;
- (void)unloadBundleWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;

@end
