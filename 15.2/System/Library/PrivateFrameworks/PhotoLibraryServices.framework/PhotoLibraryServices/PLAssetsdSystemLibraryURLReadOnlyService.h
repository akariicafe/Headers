@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)systemPhotoLibraryURL:(id /* block */)a0;
- (id)initWithConnectionAuthorization:(id)a0;
- (void).cxx_destruct;

@end
