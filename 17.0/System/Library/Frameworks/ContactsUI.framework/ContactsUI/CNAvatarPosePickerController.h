@class CNPhotoPickerVariantListController, CNPhotoPickerVariantsManager, CNPhotoPickerAnimojiProviderItem;
@protocol CNAvatarPosePickerControllerDelegate;

@interface CNAvatarPosePickerController : NSObject <CNPhotoPickerVariantListControllerDelegate>

@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerAnimojiProviderItem *originalProviderItem;
@property (retain, nonatomic) CNPhotoPickerVariantListController *posePickerController;
@property (weak, nonatomic) id<CNAvatarPosePickerControllerDelegate> delegate;
@property (nonatomic) long long numberOfItemsPerRow;
@property (nonatomic) struct CGSize { double width; double height; } desiredContentSize;

- (void).cxx_destruct;
- (id)initWithAnimojiProviderItem:(id)a0 variantsManager:(id)a1;
- (id)initWithAvatarRecord:(id)a0 variantsManager:(id)a1;
- (void)photoPickerVariantListController:(id)a0 didSelectProviderItem:(id)a1;
- (void)photoPickerVariantListControllerDidCancel:(id)a0;
- (id)posePickerViewController;

@end
