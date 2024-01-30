@class NSString, PUAlbumStreamActivity;

@interface PUPXPhotoKitAlbumStreamActionPerformer : PXPhotoKitAssetActionPerformer <PXActivityActionDelegate> {
    PUAlbumStreamActivity *_albumStreamActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)activity:(id)a0 didFinishWithSuccess:(BOOL)a1 error:(id)a2;

@end
