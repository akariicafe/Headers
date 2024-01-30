@class AVTView, UIView, CNCaptureButtonView, UIImage, UILabel, NSLayoutConstraint, UIButton;
@protocol AVTAvatarRecord, CNAvatarCaptureViewControllerDelegate;

@interface CNAvatarCaptureViewController : UIViewController

@property (retain, nonatomic) AVTView *avtView;
@property (nonatomic) NSLayoutConstraint *avtViewHeightConstraint;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNCaptureButtonView *captureButtonView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *captureFooter;
@property (retain, nonatomic) UIImage *capturedImage;
@property (weak, nonatomic) id<CNAvatarCaptureViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0;
- (void)loadAvatarView;
- (void)addPromptLabel;
- (void)updateAvtViewAspectRatioConstraint;
- (BOOL)shouldUseLandscapeLayout;
- (void)layoutFooterView;
- (void)setupFooterView;
- (void)dismissCaptureController;
- (void)didTapCancelButton:(id)a0;
- (void)didTapCaptureButton:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
