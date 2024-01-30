@class UIButton, UIVisualEffectView;
@protocol SXFullscreenNavigationBarViewDelegate;

@interface SXFullscreenNavigationBarView : UIView

@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, nonatomic) UIButton *button;
@property (weak, nonatomic) id<SXFullscreenNavigationBarViewDelegate> delegate;
@property (readonly, nonatomic) BOOL expanded;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)createBackgroundView;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)doneButtonPressed:(id)a0;
- (void)updateFrameAnimated:(BOOL)a0;
- (void)createDoneButton;

@end
