@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnectionAuthorization:(id)a0;
- (void)systemPhotoLibraryURL:(id /* block */)a0;

@end
