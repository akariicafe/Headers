@class MPMoviePlayerController;

@interface _MPMoviePlayerProxyView : UIView

@property (readonly, weak, nonatomic) MPMoviePlayerController *controller;

- (void)willMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)_updateContainmentInWindow:(id)a0 superview:(id)a1;
- (id)initWithMoviePlayerController:(id)a0;

@end
