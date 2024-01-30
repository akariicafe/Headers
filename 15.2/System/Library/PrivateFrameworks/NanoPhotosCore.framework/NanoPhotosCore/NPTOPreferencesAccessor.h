@class NPTONotificationCenter, NPSDomainAccessor, NSMutableArray, NRDevice;

@interface NPTOPreferencesAccessor : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NPTONotificationCenter *_notificationCenter;
    NSMutableArray *_batchUpdatesKeyStack;
}

@property (readonly, nonatomic) NRDevice *device;

- (void)removeObjectForKey:(id)a0;
- (id)initWithDevice:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)npto_fetchSyncedAlbum;
- (id)_npto_defaultAlbum;
- (id)npto_syncedAlbumIdentifier;
- (unsigned long long)npto_syncedPhotosLimit;
- (BOOL)npto_appPhotosSyncingEnabled;
- (BOOL)npto_memoriesSyncingEnabled;
- (BOOL)npto_featuredPhotosSyncingEnabled;
- (id)npto_appLastOpenDate;
- (void)performBatchUpdates:(id /* block */)a0 synchronizeToRemoteDevice:(BOOL)a1;
- (unsigned long long)npto_fetchCountForAssetCollection:(id)a0;
- (void)npto_setFetchCount:(unsigned long long)a0 forAssetCollection:(id)a1;
- (void)npto_removeFetchCountForAssetCollection:(id)a0;
- (BOOL)npto_isAlwaysUpdatingEnabledForAssetCollection:(id)a0;
- (void)npto_setAlwaysUpdatingEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)npto_fetchCountsForAllCollections;
- (void)npto_setFetchCountsForAllCollections:(id)a0;
- (id)npto_alwaysUpdatingEnabledForAllCollections;
- (void)npto_setAlwaysUpdatingEnabledForAllCollections:(id)a0;
- (id)_notificationNameForKey:(id)a0;
- (id)changeObserverForKey:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
