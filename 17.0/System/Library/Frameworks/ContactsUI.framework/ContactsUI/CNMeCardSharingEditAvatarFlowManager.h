@class CNAvatarEditingManager, CNPhotoPickerVariantsManager, CNVisualIdentityImagePickerController, UINavigationController, NSString;
@protocol CNMeCardSharingEditAvatarFlowManagerDelegate;

@interface CNMeCardSharingEditAvatarFlowManager : NSObject <CNAvatarEditingManagerDelegate, AVTAvatarPickerDelegate, AVTAvatarEditorViewControllerDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate>

@property (retain, nonatomic) CNVisualIdentityImagePickerController *imagePickerController;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNAvatarEditingManager *avatarEditingManager;
@property (retain, nonatomic) UINavigationController *baseNavigationController;
@property (weak, nonatomic) id<CNMeCardSharingEditAvatarFlowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)avatarEditingManager:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (void)avatarPicker:(id)a0 didSelectAvatarRecord:(id)a1;
- (void)avatarPickerDidEndCameraSession:(id)a0;
- (void)avatarPickerWillStartCameraSession:(id)a0;
- (long long)defaultModalPresentationStyle;
- (void)dismissMemojiPicker:(id)a0;
- (id)editorViewControllerForProviderItem:(id)a0;
- (void)imagePickerController:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)presentAvatarEditorViewControllerForProviderItem:(id)a0;
- (void)presentEditorForAvatarSourceType:(long long)a0 visualIdentity:(id)a1 fromGalleryViewController:(id)a2;
- (void)presentMemojiEditorForCreationFromViewController:(id)a0;
- (void)presentMemojiPicker;
- (void)pushAvatarEditorViewControllerForProviderItem:(id)a0 fromViewController:(id)a1;
- (void)pushMemojiPosePickerForItem:(id)a0 fromViewController:(id)a1;
- (void)visualIdentityEditorController:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)visualIdentityEditorControllerDidCancel:(id)a0;

@end
