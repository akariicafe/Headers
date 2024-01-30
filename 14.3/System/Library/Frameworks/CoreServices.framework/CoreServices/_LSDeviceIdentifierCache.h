@class NSDictionary, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDeviceIdentifierCache : NSObject {
    NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedCache;

- (BOOL)deviceUnlockedSinceBoot;
- (id)init;
- (void).cxx_destruct;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)save;
- (id)identifiersOfTypeNotDispatched:(long long)a0;
- (id)generateSomePerUserEntropyNotDispatched;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (id)allIdentifiersNotDispatched;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (id)applyPerUserEntropyNotDispatched:(id)a0 type:(long long)a1;

@end
