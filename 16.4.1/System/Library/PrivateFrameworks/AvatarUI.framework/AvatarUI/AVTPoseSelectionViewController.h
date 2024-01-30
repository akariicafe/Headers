@class UIView, NSString, NSArray, AVTAnimojiPoseSelectionHeaderViewController, AVTRecordingButton, AVTPoseSelectionGridViewController, AVTCircularButton, NSLayoutConstraint, UIBarButtonItem;
@protocol AVTAvatarRecord, AVTPoseSelectionViewControllerDelegate;

@interface AVTPoseSelectionViewController : UIViewController <AVTPoseSelectionGridViewControllerDelegate>

@property (nonatomic) unsigned long long poseTypes;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AVTRecordingButton *captureButton;
@property (retain, nonatomic) AVTCircularButton *discardButton;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTAnimojiPoseSelectionHeaderViewController *headerViewController;
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint;
@property (retain, nonatomic) AVTPoseSelectionGridViewController *gridViewController;
@property (retain, nonatomic) NSArray *stickerConfigurations;
@property (retain, nonatomic) UIView *headerDropShadowView;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIView *borderMaskView;
@property (nonatomic) BOOL shouldNotifyDelegateOnSelection;
@property (weak, nonatomic) id<AVTPoseSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poseConfigurationsForTypes:(unsigned long long)a0 avatarRecord:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderMaskRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapCaptureButton:(id)a0;
- (id)initWithSelectedRecord:(id)a0;
- (void)didTapCancel:(id)a0;
- (void)didTapDone:(id)a0;
- (void)createCaptureButtonIfNeeded;
- (void)createDiscardButtonIfNeeded;
- (void)didTapDiscardButton:(id)a0;
- (id)initWithSelectedRecord:(id)a0 poseConfigurations:(id)a1;
- (id)initWithSelectedRecord:(id)a0 poseTypes:(unsigned long long)a1;
- (void)notifyDelegateOfSelectedPose;
- (void)poseSelectionGridController:(id)a0 didSelectConfiguration:(id)a1;
- (void)poseSelectionGridControllerDidSelectCameraItem:(id)a0;
- (void)returnPressed:(id)a0;
- (void)updateForPoseConfiguration:(id)a0 animated:(BOOL)a1;
- (void)updateHeaderHeightConstraint;

@end
