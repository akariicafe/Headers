@class AVTUIStickerGeneratorPool, AVTCircularButton, UICollectionView, UIBarButtonItem, NSObject, AVTRecordingButton, UIView, NSLayoutConstraint, NSString, AVTAnimojiPoseSelectionHeaderViewController, AVTStickerGenerator, UICollectionViewFlowLayout, NSArray, AVTUIStickerRenderer, UIImage;
@protocol AVTTaskScheduler, AVTPoseSelectionViewControllerDelegate, OS_dispatch_queue, AVTAvatarRecord;

@interface AVTPoseSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) unsigned long long poseTypes;
@property (retain, nonatomic) AVTUIStickerRenderer *stickerRenderer;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (retain, nonatomic) id<AVTTaskScheduler> scheduler;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AVTRecordingButton *captureButton;
@property (retain, nonatomic) AVTCircularButton *discardButton;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTAnimojiPoseSelectionHeaderViewController *headerViewController;
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *poseCollectionView;
@property (retain, nonatomic) NSArray *stickerConfigurations;
@property (retain, nonatomic) AVTStickerGenerator *stickerGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stickerGenerationQueue;
@property (retain, nonatomic) UIView *headerDropShadowView;
@property (retain, nonatomic) UIView *cameraCellView;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIView *borderMaskView;
@property (weak, nonatomic) id<AVTPoseSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderMaskRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)keyCommands;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithSelectedRecord:(id)a0;
- (id)initWithSelectedRecord:(id)a0 poseTypes:(unsigned long long)a1;
- (void)didTapCancel:(id)a0;
- (void)didTapDone:(id)a0;
- (void)updateHeaderHeightConstraint;
- (void)updateForPoseSelectionAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)returnPressed:(id)a0;
- (void)createCaptureButtonIfNeeded;
- (void)createDiscardButtonIfNeeded;
- (void)didTapDiscardButton:(id)a0;
- (id)configurationForIndex:(long long)a0;
- (BOOL)canBecomeFirstResponder;
- (void)updateFlowLayoutItemSize;
- (void)didTapCaptureButton:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
