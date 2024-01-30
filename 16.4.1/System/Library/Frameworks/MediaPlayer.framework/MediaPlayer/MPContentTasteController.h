@class ICUserIdentity, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary *_pendingUpdateRecordByStoreAdamID;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSerialQueue;
@property (class, readonly, nonatomic) NSMutableDictionary *controllers;
@property (class, readonly, nonatomic) MPContentTasteController *sharedController;

@property (readonly, nonatomic) ICUserIdentity *userIdentity;

+ (void)_postNotificationName:(id)a0 controller:(id)a1 userInfo:(id)a2;
+ (id)controllerWithUserIdentity:(id)a0;
+ (void)_postNotificationName:(id)a0 controller:(id)a1;
+ (id)_tasteControllerWithUserIdentity:(id)a0 isSingleton:(BOOL)a1 createIfRequired:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithUserIdentity:(id)a0;
- (id)_ML3QueryWithEntityClass:(Class)a0 predicate:(id)a1 options:(long long)a2;
- (id)_addPendingUpdateRecord:(id)a0 withKey:(id)a1 inDictionary:(id)a2;
- (id)_addPendingUpdateRecordForPlaylistGlobalID:(id)a0 contentTasteType:(long long)a1;
- (id)_addPendingUpdateRecordForStoreAdamID:(long long)a0 contentTasteType:(long long)a1;
- (void)_deviceMediaLibraryDidChangeNotification:(id)a0;
- (id)_libraryEntityForModel:(id)a0;
- (id)_libraryEntityWithStoreID:(long long)a0 contentType:(long long)a1;
- (void)_libraryPathDidChangeForTasteController:(id)a0;
- (id)_libraryPlaylistWithGlobalID:(id)a0;
- (id)_mediaLibrary;
- (id)_pendingUpdateRecordForKey:(id)a0 inDictionary:(id)a1;
- (id)_pendingUpdateRecordForPlaylistGlobalID:(id)a0;
- (id)_pendingUpdateRecordForStoreAdamID:(long long)a0;
- (void)_removePendingUpdateRecordForPlaylistGlobalID:(id)a0 token:(id)a1;
- (void)_removePendingUpdateRecordForStoreAdamID:(long long)a0 token:(id)a1;
- (void)setTasteType:(long long)a0 forMediaEntity:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setTasteType:(long long)a0 forModel:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setTasteType:(long long)a0 forPlaylistGlobalID:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setTasteType:(long long)a0 forStoreAdamID:(long long)a1 withContentType:(long long)a2 completionHandler:(id /* block */)a3;
- (long long)tasteTypeForMediaEntity:(id)a0;
- (long long)tasteTypeForModel:(id)a0;
- (long long)tasteTypeForPlaylistGlobalID:(id)a0;
- (long long)tasteTypeForStoreAdamID:(long long)a0;

@end
