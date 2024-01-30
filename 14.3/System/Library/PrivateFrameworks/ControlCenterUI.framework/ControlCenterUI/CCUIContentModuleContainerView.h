@class NSString, NSArray, UIView;

@interface CCUIContentModuleContainerView : UIView {
    NSArray *_views;
}

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (readonly, nonatomic) UIView *c2AnimationContainerView;
@property (readonly, nonatomic) UIView *caAnimationContainerView;
@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) BOOL ignoreFrameUpdates;

- (void).cxx_destruct;
- (id)initWithModuleIdentifier:(id)a0 options:(unsigned long long)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)containerView;
- (void)layoutSubviews;

@end
