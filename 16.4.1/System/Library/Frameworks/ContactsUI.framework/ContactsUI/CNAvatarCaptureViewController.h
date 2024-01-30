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

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupFooterView;
- (void)addPromptLabel;
- (void)didTapCancelButton:(id)a0;
- (void)didTapCaptureButton:(id)a0;
- (void)dismissCaptureController;
- (id)initWithAvatarRecord:(id)a0;
- (void)layoutFooterView;
- (void)loadAvatarView;
- (BOOL)shouldUseLandscapeLayout;
- (void)updateAvtViewAspectRatioConstraint;

@end
