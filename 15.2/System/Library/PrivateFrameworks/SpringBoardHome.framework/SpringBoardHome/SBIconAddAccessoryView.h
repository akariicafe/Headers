@class NSString, UIImageView, SBFParallaxSettings, UITapGestureRecognizer;
@protocol SBIconListLayout;

@interface SBIconAddAccessoryView : UIView <SBIconAccessoryView> {
    UIImageView *_addImageView;
}

@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)setAccessoryBrightness:(double)a0;
- (void)prepareForReuse;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)displayingAccessory;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_hitTestPadding;

@end
