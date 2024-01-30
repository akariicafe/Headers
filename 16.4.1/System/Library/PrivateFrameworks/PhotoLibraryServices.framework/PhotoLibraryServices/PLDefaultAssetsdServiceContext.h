@class NSString, NSXPCConnection, NSError, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property (readonly, copy, nonatomic) NSString *clientDebugDescription;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelector:(SEL)a0 connection:(id)a1 libraryBundle:(id)a2 connectionAuthorization:(id)a3;
- (void)invalidateClientAuthorizationCache;
- (void)awaitLibraryState:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)libraryServicesManager;
- (void).cxx_destruct;

@end
