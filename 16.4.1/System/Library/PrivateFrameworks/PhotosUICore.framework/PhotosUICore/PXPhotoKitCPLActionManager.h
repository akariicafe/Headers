@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionManager : PXCPLActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
