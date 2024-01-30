@class UIView;

@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase {
    UIView *_darkTintView;
}

- (void)endRequiringLiveBackdropViewForReason:(id)a0;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (void)beginRequiringBackdropViewForReason:(id)a0;
- (void)beginRequiringLiveBackdropViewForReason:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBlurProgress:(double)a0 behaviorMode:(long long)a1 completion:(id /* block */)a2;
- (void)endRequiringBackdropViewForReason:(id)a0;
- (void)_updateDarkTintViewHidden;

@end
