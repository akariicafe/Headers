@class NSString, NSCache, NSXPCConnection;

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {
    NSXPCConnection *_connection;
    NSCache *_localStorageCache;
}

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (id)loadSchemasForBundleIdentifiers:(id)a0 error:(id *)a1;
- (id)init;
- (void)purgeImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)loadDataImageFromImage:(id)a0 scaledSize:(struct { double x0; double x1; })a1 error:(id *)a2;
- (id)securityScopedURLsForBundleIdentifiers:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)fetchShareExtensionIntentForExtensionContextUUID:(id)a0;
- (id)availableSchemasWithError:(id *)a0;
- (oneway void)storeUserContext:(id)a0 forBundleIdentifier:(id)a1;
- (void)retrieveImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_localStorageCache;
- (id)serviceProxyWithErrorHandler:(id /* block */)a0;
- (void)loadDataImageFromImage:(id)a0 usingPortableImageLoader:(id)a1 scaledSize:(struct { double x0; double x1; })a2 completion:(id /* block */)a3;
- (BOOL)accessBundleContentForBundleIdentifiers:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (id)synchronousServiceProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)canStoreImage:(id)a0;
- (id)_availableBundleIdentifiers;
- (id)schemaURLsForBundleIdentifiers:(id)a0;
- (id)imageServiceSchemaURLsForBundleIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)canLoadImageDataForImage:(id)a0;
- (void)loadImageDataAndSizeForImage:(id)a0 reply:(id /* block */)a1;
- (void)storeImage:(id)a0 scaled:(BOOL)a1 qualityOfService:(unsigned int)a2 storeType:(unsigned long long)a3 completion:(id /* block */)a4;

@end
