@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject {
    id _matchingContext;
}

@property (copy) NSDictionary *extensionIdentifierByContainingAppIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stopMonitoringExtensions;
- (void)_startMonitoringExtensions;
- (id)extensionForBundleIdentifier:(id)a0 error:(id *)a1;

@end
