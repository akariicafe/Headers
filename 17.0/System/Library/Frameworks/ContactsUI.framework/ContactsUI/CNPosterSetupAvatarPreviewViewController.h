@class CNContactImage, NSString, CNAvatarEditingManager, CNPhotoPickerVariantsManager, NSData, CNContact, _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper, UIImagePickerController, CNVisualIdentityImagePickerController, UIColor;
@protocol CNPosterSetupAvatarPreviewViewControllerDelegate;

@interface CNPosterSetupAvatarPreviewViewController : UIViewController <ContactsUI.CNPosterSetupAvatarPreviewViewDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate, CNAvatarEditingManagerDelegate>

@property (retain, nonatomic) _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper *avatarPreviewView;
@property (retain, nonatomic) CNVisualIdentityImagePickerController *imagePicker;
@property (retain, nonatomic) UIColor *imagePickerCustomBackgroundColor;
@property (retain, nonatomic) CNContact *editingContact;
@property (readonly, nonatomic) NSString *wallpaperType;
@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) CNContactImage *contactImage;
@property (retain, nonatomic) CNAvatarEditingManager *memojiEditingManager;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) UIImagePickerController *memojiImagePickerController;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (weak, nonatomic) id<CNPosterSetupAvatarPreviewViewControllerDelegate> delegate;
@property (nonatomic) BOOL hideSkipOption;
@property (nonatomic) BOOL shouldShowCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultItemSize;
+ (unsigned long long)defaultImageTypeForWallpaperType:(id)a0;
+ (double)twentyFourPointFivePercentOfHeight:(double)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)photoPickerProviderItemFromPosterConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)avatarEditingManager:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)avatarPreviewViewDidFinishWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)avatarPreviewViewDidSelectChangeScale;
- (void)avatarPreviewViewDidSelectCustomizePhoto;
- (id)closestColor:(id)a0 inColors:(id)a1;
- (void)didTapCancel;
- (id)editorViewControllerForProviderItem:(id)a0;
- (void)imagePickerController:(id)a0 didFinishWithProviderItem:(id)a1;
- (id)initWithContactImage:(id)a0 imageType:(unsigned long long)a1 forEditingContact:(id)a2;
- (id)initWithPosterConfiguration:(id)a0 forEditingContact:(id)a1;
- (id)memojiEditingManagerForAvatarRecord:(id)a0;
- (id)memojiProviderItemForAvatarImageData:(id)a0 backgroundColor:(id)a1;
- (id)monogramProviderItemForInitials:(id)a0 backgroundColor:(id)a1;
- (id)photoProviderItemForFullImageFromPosterConfiguration:(id)a0;
- (void)photoProviderItemForSnapshotFromPosterConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)photoProviderItemFromPosterConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)presentPhotoFilterEditorForProviderItem:(id)a0;
- (id)providerItemForRandomColoredMonogram;
- (id)providerItemWithSnapshotImage:(id)a0;
- (void)skipStep;
- (void)updateMemojiEditingManagerForProviderItem:(id)a0;
- (void)updateWithProviderItem:(id)a0;
- (void)visualIdentityEditorController:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)visualIdentityEditorControllerDidCancel:(id)a0;

@end
