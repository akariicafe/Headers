@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
    SSXPCConnection *_connection;
    long long _manifestType;
}

@property (readonly) long long manifestType;

- (id)init;
- (void)dealloc;
- (id)initWithManifestType:(long long)a0;
- (void)_removeItemsWithAssetPaths:(id)a0 completionBlock:(id /* block */)a1;
- (void)getPathsForFilesWithClass:(long long)a0 completionBlock:(id /* block */)a1;
- (void)rebuildManifestWithCompletionBlock:(id /* block */)a0;
- (void)removeItemWithAssetPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeItemsWithAssetPaths:(id)a0 completionBlock:(id /* block */)a1;

@end
