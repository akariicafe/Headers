@class SBHomeGrabberView, NSMutableArray, SBFHomeGrabberSettings;

@interface SBHomeGrabberRotationView : UIView {
    NSMutableArray *_rotationWrapperViews;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _useRotationWrapperViews;
}

@property (readonly, nonatomic) SBHomeGrabberView *grabberView;
@property (nonatomic) long long orientation;

- (id)_addWrapperViewWithOrientation:(long long)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1 rotationSettings:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1 useRotationWrapperViews:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1;
- (void).cxx_destruct;

@end
