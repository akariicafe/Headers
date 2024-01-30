@class NSString, NSXPCConnection, NSError, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (copy, nonatomic) NSError *replyWarning;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property (readonly, copy, nonatomic) NSString *clientDebugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)libraryServicesManager;
- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;
- (void)invalidateClientAuthorizationCache;
- (id)initWithSelector:(SEL)a0 connection:(id)a1 libraryBundle:(id)a2 connectionAuthorization:(id)a3;
- (void)awaitLibraryState:(long long)a0 completionHandler:(id /* block */)a1;

@end
