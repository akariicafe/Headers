@class UIView, UIColor, UITapGestureRecognizer, AVTRecordingButton, AVTViewSession, UIImageView, AVTCircularButton, NSString, AVTViewSessionProvider, NSLayoutConstraint, UIBarButtonItem, AVTStickerConfiguration;
@protocol AVTPoseCaptureViewControllerDelegate, AVTAvatarRecord;

@interface AVTPoseCaptureViewController : UIViewController <AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate>

@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (weak, nonatomic) UIView *avtViewContainer;
@property (copy, nonatomic) id /* block */ postSessionDidBecomeActiveHandler;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL allowFacetracking;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (retain, nonatomic) UIView *borderMaskView;
@property (retain, nonatomic) AVTRecordingButton *captureButton;
@property (retain, nonatomic) AVTCircularButton *discardButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) NSLayoutConstraint *headerTopAnchor;
@property (nonatomic) long long topPadding;
@property (retain, nonatomic) NSLayoutConstraint *captureButtonBottomAnchor;
@property (nonatomic) long long bottomPadding;
@property (retain, nonatomic) AVTStickerConfiguration *adHocConfiguration;
@property (weak, nonatomic) id<AVTPoseCaptureViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderMaskRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (void)didTapAvatarView:(id)a0;
- (void)didTapCaptureButton:(id)a0;
- (void)didTapCancel:(id)a0;
- (void)didTapDone:(id)a0;
- (void)beginAVTViewSessionWithDidBeginBlock:(id /* block */)a0;
- (void)beginUsingAVTViewFromSession:(id)a0;
- (void)configureAVTViewSession:(id)a0 withAvatarRecord:(id)a1 completionBlock:(id /* block */)a2;
- (void)configureUserInfoLabel;
- (void)controllerPresentationWillObstructView:(id)a0;
- (void)createCaptureButtonIfNeeded;
- (void)createDiscardButtonIfNeeded;
- (void)didTapDiscardButton:(id)a0;
- (id)initWithSelectedRecord:(id)a0 avtViewSessionProvider:(id)a1;
- (long long)interfaceOrientationForFaceTrackingManager:(id)a0;
- (void)switchToCaptureMode;
- (void)switchToReviewMode:(id)a0;
- (void)updateAVTViewContainerFrame;
- (void)updateHeaderHeightConstraint;
- (void)updatePaddingConstant;

@end
