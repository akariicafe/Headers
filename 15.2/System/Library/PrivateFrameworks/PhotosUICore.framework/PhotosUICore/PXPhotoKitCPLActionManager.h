@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionManager : PXCPLActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)actionPerformerForActionType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;

@end
