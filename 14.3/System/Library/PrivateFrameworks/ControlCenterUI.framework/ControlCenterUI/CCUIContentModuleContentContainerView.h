@class MTMaterialView;

@interface CCUIContentModuleContentContainerView : UIView {
    BOOL _expanded;
    MTMaterialView *_moduleMaterialView;
}

@property (nonatomic) BOOL moduleProvidesOwnPlatter;
@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic) double expandedContinuousCornerRadius;

- (id)init;
- (void).cxx_destruct;
- (void)didEndTransitionToExpandedMode:(BOOL)a0;
- (void)_transitionToExpandedMode:(BOOL)a0 force:(BOOL)a1;
- (void)_configureModuleMaterialViewIfNecessary;
- (void)transitionToExpandedMode:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (BOOL)_isContentClippingRequiredForSubview:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0 ignoreSubviewClipping:(BOOL)a1;

@end
