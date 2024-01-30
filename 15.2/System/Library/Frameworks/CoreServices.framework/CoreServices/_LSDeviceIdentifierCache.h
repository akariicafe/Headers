@class NSDictionary, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDeviceIdentifierCache : NSObject {
    NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSUUID *_vendorIdentifierSeed;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedCache;

- (id)generateSomePerUserEntropyNotDispatched;
- (void)save;
- (id)extractUUIDForKey:(id)a0;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (id)applyPerUserEntropyNotDispatched:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)allIdentifiersNotDispatched;
- (id)identifiersOfTypeNotDispatched:(long long)a0;
- (id)deviceIdentifierVendorSeed;
- (BOOL)deviceUnlockedSinceBoot;

@end
