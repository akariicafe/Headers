@interface CKSnapshotUtilities : NSObject

+ (id)snapshotForGUID:(id)a0;
+ (id)snapshotKeyWithGuid:(id)a0;
+ (long long)_convertUserInterfaceStyle:(long long)a0;
+ (void)_saveSnapshot:(id)a0 url:(id)a1;
+ (id)_snapshotAtURL:(id)a0;
+ (BOOL)snapshotExistsForGUID:(id)a0;
+ (void)cacheSnapshot:(id)a0 guid:(id)a1 postChangeNotification:(BOOL)a2;
+ (void)_cacheSnapshotView:(id)a0 forGUID:(id)a1;
+ (id)_snapshotViewForGUID:(id)a0;

@end
