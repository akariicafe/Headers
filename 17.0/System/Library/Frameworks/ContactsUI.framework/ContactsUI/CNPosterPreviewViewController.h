@class _TtC10ContactsUI32CNPosterPreviewViewConfiguration, CNContact;
@protocol CNPosterPreviewViewControllerDelegate;

@interface CNPosterPreviewViewController : UIViewController <ContactsUI.CNPosterPreviewViewDelegate>

@property (nonatomic) long long editingState;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) _TtC10ContactsUI32CNPosterPreviewViewConfiguration *configuration;
@property (weak, nonatomic) id<CNPosterPreviewViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (void)skipPosterSetup;
- (id)backgroundColorFromPhotoPickerProviderItem:(id)a0;
- (id)initWithPosterConfiguration:(id)a0 fromProviderItem:(id)a1 contact:(id)a2 editingState:(long long)a3 isEditingSNaP:(BOOL)a4;
- (void)previewViewDidCreateWithPosterConfiguration:(id)a0;
- (void)previewViewDidFinishWithPosterConfiguration:(id)a0;
- (void)previewViewDidSelectUseDifferentPoster;
- (void)updateNavigationBar;

@end
