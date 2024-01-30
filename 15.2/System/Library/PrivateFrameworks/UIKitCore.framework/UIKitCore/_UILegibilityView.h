@class UIImage, UIImageView, _UILegibilitySettings;

@interface _UILegibilityView : UIView

@property (retain, nonatomic) _UILegibilitySettings *settings;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) long long options;
@property (readonly, nonatomic) long long style;
@property (nonatomic) double strength;
@property (nonatomic) BOOL hidesImage;
@property (readonly, nonatomic) BOOL usesColorFilters;

- (void)setStyle:(long long)a0 image:(id)a1 shadowImage:(id)a2;
- (void)layoutSubviews;
- (long long)style;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2 shadowImage:(id)a3;
- (void)setImage:(id)a0 shadowImage:(id)a1;
- (void)updateImage;
- (BOOL)usesSecondaryColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0 image:(id)a1 shadowImage:(id)a2;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2;
- (void)setSettings:(id)a0 image:(id)a1 shadowImage:(id)a2;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2 shadowImage:(id)a3 options:(long long)a4;
- (void)updateForChangedSettings:(id)a0;
- (id)drawingColor;
- (void)dealloc;
- (id)initWithStyle:(long long)a0 image:(id)a1;
- (void)_updateFilters;

@end
