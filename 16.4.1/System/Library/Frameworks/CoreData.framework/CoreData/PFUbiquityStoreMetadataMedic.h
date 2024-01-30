@class NSString, PFUbiquityLocation, NSPersistentStore;

@interface PFUbiquityStoreMetadataMedic : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
}

- (void)dealloc;
- (id)initWithStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;

@end
