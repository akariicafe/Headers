@class HUCCInfoMosaicGridView, UIView;

@interface HUCCSmartContainerView : UIView

@property (retain, nonatomic) HUCCInfoMosaicGridView *lockSecurityView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } compressedAnimationStartFrame;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *compressedView;
@property (retain, nonatomic) UIView *expandedView;
@property (nonatomic) BOOL isShowingLockSecurity;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)resetToInitialState;
- (void)hideLockSecurity;
- (void)showLockSecurityWithFrameDelegate:(id)a0;
- (void)willMoveToExpandedStateWithAnimationStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
