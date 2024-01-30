@class NSString, PHPhotoLibrary;

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend> {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)photoLibrary;
- (void)_registerEntryWithImage:(id)a0 options:(id)a1 retry:(BOOL)a2 identifierHandler:(id /* block */)a3;
- (id)_ARKitImageDataFromImage:(id)a0;
- (void)registerEntryWithImage:(id)a0 options:(id)a1 identifierHandler:(id /* block */)a2;
- (void)imageForPreviouslyRegisteredIdentifier:(id)a0 imageHandler:(id /* block */)a1;
- (void)updateImage:(id)a0 withModificationData:(id)a1 forEntryWithIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveImageToTemporaryLocation:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeEntryWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
