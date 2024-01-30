@class HMDBackingStore, HMFUnfairLock, CKServerChangeToken, NSMutableDictionary, HMDCloudZone, HMDCloudLegacyZone, NSObject, HMDCloudHomeManagerZone, HMDCloudMetadataZone;
@protocol OS_dispatch_queue;

@interface HMDCloudCache : HMFObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) HMDCloudZone *homeDataInformation;
@property (retain, nonatomic) HMDCloudLegacyZone *legacyZone;
@property (retain, nonatomic) HMDCloudMetadataZone *metadataZone;
@property (retain, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property (retain, nonatomic) NSMutableDictionary *homeZones;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) CKServerChangeToken *databaseServerChangeToken;

- (id)init;
- (void)_createZones:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deleteAllZones;
- (void)homeZoneWithName:(id)a0 owner:(id)a1 completion:(id /* block */)a2;
- (void)deleteHomeZoneWithName:(id)a0;
- (void)persistDatabaseServerChangeToken;
- (id)allHomeZones;
- (void)createAndFetchZonesFromBackingStore:(id /* block */)a0;
- (BOOL)homeZoneExists:(id)a0;
- (id)_findStoreCacheZone:(id)a0 byName:(id)a1;
- (id)initWithBackingStore:(id)a0 workQueue:(id)a1;

@end
