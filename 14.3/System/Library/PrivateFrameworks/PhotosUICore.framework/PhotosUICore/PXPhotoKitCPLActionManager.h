@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionManager : PXCPLActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)a0;

@end
