@class UIColor, UIVisualEffect, UIImageView, UITraitCollection;

@interface TPKContentView : UIView {
    void /* unknown type, empty encoding */ displayBottomSeparator;
    void /* unknown type, empty encoding */ directionalEdgeInsets;
    void /* unknown type, empty encoding */ contentViewBackgroundColor;
    void /* unknown type, empty encoding */ preferredTraitCollection;
    void /* unknown type, empty encoding */ imageProxy;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ viewModel;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMicaSize;

@property (nonatomic, weak) void /* unknown type, empty encoding */ viewDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ content;
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } defaultDirectionalEdgeInsets;
@property (nonatomic, retain) UIColor *preferredActionTintColor;
@property (nonatomic, retain) UIColor *preferredIconImageTintColor;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredMicaLayerSize;
@property (nonatomic, retain) UITraitCollection *_preferredTraitCollection;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

+ (id)SiriIconWithTraitCollection:(id)a0;
+ (id)TipsIconWithTraitCollection:(id)a0;

- (void)deviceOrientationDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (void)bottomSeperatorNeedsUpdate;
- (void)resetHostingView;
- (void)updateContentBackgroundColor:(id)a0;
- (id)initWithReusableTipView:(id)a0;
- (void)monitorContentSizeCategoryChanges;
- (void)monitorDeviceOrientationChanges;
- (void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateDisplaysBottomSeparator:(BOOL)a0;
- (void)updatePreferredTraitCollection:(id)a0;

@end
