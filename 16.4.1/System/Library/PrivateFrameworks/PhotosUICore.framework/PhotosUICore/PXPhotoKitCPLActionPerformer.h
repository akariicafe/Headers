@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionPerformer : PXCPLActionPerformer

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 photoLibrary:(id)a1;

@end
