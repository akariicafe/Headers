@class NSString, NSURL, PLAssetsdClient;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory> {
    NSURL *_libraryURL;
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newEndpoint;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;

@end
