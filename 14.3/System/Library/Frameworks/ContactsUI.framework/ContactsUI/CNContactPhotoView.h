@class CNAvatarView, NSArray, UITapGestureRecognizer, UILongPressGestureRecognizer, UIDropInteraction, UIButton, CNPhotoPickerViewController, NSString, CNMutableContact, PRLikeness;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNPhotoPickerViewControllerDelegate, CNAvatarViewDelegate, CNPresenterDelegate>

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (retain, nonatomic) PRLikeness *originalLikeness;
@property (retain, nonatomic) PRLikeness *currentLikeness;
@property (nonatomic) BOOL prohibitsPersonaFetch;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIButton *editPhotoButton;
@property (nonatomic) BOOL isAnimatingBounce;
@property (nonatomic) BOOL modified;
@property (retain, nonatomic) NSArray *variableConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (nonatomic) BOOL acceptsImageDrop;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *contacts;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) double labelAlpha;
@property (nonatomic) BOOL showEditingLabel;
@property (readonly, nonatomic) BOOL shouldAllowTakePhotoAction;
@property (weak, nonatomic) id<CNPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<CNContactPhotoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isPresentingModalViewController;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)descriptorForRequiredKeys;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)a0;
+ (id)supportedPasteboardTypes;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)paste:(id)a0;
- (void)reloadData;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (BOOL)hasPhoto;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 monogrammerStyle:(long long)a1 shouldAllowTakePhotoAction:(BOOL)a2 threeDTouchEnabled:(BOOL)a3 contactStore:(id)a4 allowsImageDrops:(BOOL)a5 imageRenderer:(id)a6;
- (id)contact;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)updateFontSizes;
- (void)menuWillHide:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)saveEdits;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)didUpdateContentForAvatarView:(id)a0;
- (void)photoPickerDidCancel:(id)a0;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)resetPhoto;
- (void)disablePhotoTapGesture;
- (void)avatarTapped:(id)a0;
- (void)sender:(id)a0 presentViewController:(id)a1;
- (void)sender:(id)a0 dismissViewController:(id)a1;
- (void)sender:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)longPressGesture:(id)a0;
- (id)currentImageData;
- (void)willBeginPreviewInteractionForAvatarView:(id)a0;
- (BOOL)isMeContact;
- (BOOL)_isUsingSilhouette;
- (void)updatePhoto;
- (id)previewPath;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void)previewControllerDidDismiss:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (void)setEditing:(BOOL)a0 preservingChanges:(BOOL)a1;
- (id)previewController:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)setHighlightedFrame:(BOOL)a0;
- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (BOOL)_isUsingCuratedPhoto;
- (void)presentPhotoPicker;
- (void)_zoomContactPhoto;
- (void)updateViewsAndNotifyDelegate:(BOOL)a0;
- (void)updateEditPhotoButton;
- (id)newPendingContactPreservingChangesFrom:(id)a0;
- (void)saveChangesFromPendingContact:(id)a0 toContact:(id)a1;
- (void)updatePendingContactWithEditedPropertyItem:(id)a0;
- (void)_presentPhotoPicker;
- (void)_bounceSmallPhoto;
- (void)saveImagePickerMediaFromInfo:(id)a0 toContact:(id)a1;
- (id)_createImagePickerForEditingImageData:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_presentFullScreenPhoto:(id)a0;

@end
