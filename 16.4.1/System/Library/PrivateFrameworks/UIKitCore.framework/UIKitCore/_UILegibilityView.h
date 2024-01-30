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

- (BOOL)usesSecondaryColor;
- (id)drawingColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2;
- (void)layoutSubviews;
- (void)updateImage;
- (void)updateForChangedSettings:(id)a0;
- (void)_updateFilters;
- (long long)style;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2 shadowImage:(id)a3;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2 shadowImage:(id)a3 options:(long long)a4;
- (id)initWithStyle:(long long)a0 image:(id)a1;
- (id)initWithStyle:(long long)a0 image:(id)a1 shadowImage:(id)a2;
- (void)setImage:(id)a0 shadowImage:(id)a1;
- (void)setSettings:(id)a0 image:(id)a1 shadowImage:(id)a2;
- (void)setStyle:(long long)a0 image:(id)a1 shadowImage:(id)a2;

@end
