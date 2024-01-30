@class HMDBackingStore, CKServerChangeToken, NSMutableDictionary, HMDCloudZone, HMDCloudLegacyZone, NSObject, HMDCloudHomeManagerZone, HMDCloudMetadataZone;
@protocol OS_dispatch_queue;

@interface HMDCloudCache : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HMDCloudZone *homeDataInformation;
@property (retain, nonatomic) HMDCloudLegacyZone *legacyZone;
@property (retain, nonatomic) HMDCloudMetadataZone *metadataZone;
@property (retain, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property (retain, nonatomic) NSMutableDictionary *homeZones;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) CKServerChangeToken *databaseServerChangeToken;

- (void)deleteAllZones;
- (id)init;
- (void).cxx_destruct;
- (BOOL)homeZoneExists:(id)a0;
- (id)initWithBackingStore:(id)a0 workQueue:(id)a1;
- (void)_createZones:(id)a0 completion:(id /* block */)a1;
- (id)_findStoreCacheZone:(id)a0 byName:(id)a1;
- (id)allHomeZones;
- (void)createAndFetchZonesFromBackingStore:(id /* block */)a0;
- (void)deleteHomeZoneWithName:(id)a0;
- (id)homeZoneWithName:(id)a0;
- (void)homeZoneWithName:(id)a0 owner:(id)a1 completion:(id /* block */)a2;
- (void)persistDatabaseServerChangeToken;

@end
