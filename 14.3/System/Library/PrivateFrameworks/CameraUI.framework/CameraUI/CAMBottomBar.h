@class CAMTimerButton, PUReviewScreenDoneButton, CUShutterButton, CAMCreativeCameraButton, CAMImageWell, CEKApertureButton, UIButton, UIView, CAMFlipButton, CAMUtilityBar, CAMFlashButton, CAMLivePhotoButton, CAMModeDial, CAMHDRButton, CAMExpandableMenuButton;
@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate>

@property (retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (retain, nonatomic) CUShutterButton *stillDuringVideoButton;
@property (retain, nonatomic) CAMModeDial *modeDial;
@property (retain, nonatomic) CAMImageWell *imageWell;
@property (retain, nonatomic) UIButton *reviewButton;
@property (retain, nonatomic) CAMCreativeCameraButton *creativeCameraButton;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (retain, nonatomic) CAMFlashButton *flashButton;
@property (retain, nonatomic) CAMHDRButton *HDRButton;
@property (retain, nonatomic) CAMTimerButton *timerButton;
@property (retain, nonatomic) CAMLivePhotoButton *livePhotoButton;
@property (retain, nonatomic) CEKApertureButton *apertureButton;
@property (retain, nonatomic) CAMUtilityBar *utilityBar;
@property (nonatomic) double utilityBarExtensionDistance;

+ (BOOL)wantsVerticalBarForLayoutStyle:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shutterButtonAlignmentRectInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLayoutStyle:(long long)a1;

- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (void)expandMenuButton:(id)a0 animated:(BOOL)a1;
- (void)_layoutModeDialForLayoutStyle:(long long)a0;
- (id)_currentMenuButtons;
- (id)initWithLayoutStyle:(long long)a0;
- (void)_updateCreativeCameraButtonTappableEdgeInsets;
- (void).cxx_destruct;
- (void)_layoutUtilityBarForLayoutStyle:(long long)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedFrameForMenuButton:(id)a0;
- (void)_layoutReviewButtonForLayoutStyle:(long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)collapseMenuButton:(id)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)apertureButtonNeedsLayout:(id)a0 animated:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateControlVisibilityAnimated:(BOOL)a0;
- (void)_layoutFlipButtonForLayoutStyle:(long long)a0;
- (void)_layoutDoneButtonForLayoutStyle:(long long)a0;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)layoutSubviews;
- (void)_updateImageWellTappableEdgeInsets;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutImageWellForLayoutStyle:(long long)a0;
- (id)touchingRecognizersToCancel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collapsedFrameForMenuButton:(id)a0;
- (void)_layoutMenuButtons:(id)a0 apply:(BOOL)a1 withExpandedMenuButton:(id)a2 collapsingMenuButton:(id)a3 collapsingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)_layoutCreativeCameraButtonForLayoutStyle:(long long)a0;
- (void)_ensureSubviewOrdering;
- (double)_opacityForBackgroundStyle:(long long)a0;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)a0;
- (void)_layoutShutterButtonForLayoutStyle:(long long)a0;
- (void)_iterateViewsInHUDManager:(id)a0 forHUDItem:(id /* block */)a1;

@end
