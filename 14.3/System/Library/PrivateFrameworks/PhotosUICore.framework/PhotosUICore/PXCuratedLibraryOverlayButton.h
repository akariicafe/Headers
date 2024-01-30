@class UIFont, UIView, NSCache, UILabel, NSString, UIImageView, PXCuratedLibraryOverlayButtonConfiguration, UIVisualEffectView, UIPointerInteraction, UIColor;

@interface PXCuratedLibraryOverlayButton : UIControl <UIPointerInteractionDelegate, PXGReusableView>

@property (class, readonly, nonatomic) NSCache *titleSizeCache;
@property (class, readonly, nonatomic) NSCache *buttonSizeCache;
@property (class, readonly, nonatomic) UIFont *defaultTitleFont;
@property (class, readonly, nonatomic) UIColor *defaultTitleColor;

@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *solidBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) NSString *axLabel;
@property (copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeOfTitle:(id)a0 withFont:(id)a1;
+ (void)_getSize:(out struct CGSize { double x0; double x1; } *)a0 titleFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 captionFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 iconFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 forConfiguration:(id)a4 title:(id)a5;
+ (id)roundedCornerMaskImage:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a0 size:(struct CGSize { double x0; double x1; })a1;

- (BOOL)canBecomeFocused;
- (void)_setupViews;
- (void)_updateBackgroundView;
- (void)_performAction:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)_updateButtonWithConfiguration:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)prepareForReuse;
- (void)_updateEffectViewBackgroundStyle;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_platformSpecificViewSetup;
- (void)_updateEffectView;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
