@class UIColor, NSString, CAGradientLayer, NTKVictoryLabel, CLKDevice;

@interface NTKVictoryDigitsView : UIView {
    CLKDevice *_device;
    NTKVictoryLabel *_label;
    BOOL _hasSetAppearance;
    CAGradientLayer *_dimmingOverlay;
    BOOL _dimIsUpper;
    double _tritiumOnFraction;
}

@property (retain, nonatomic) UIColor *outlineBackgroundColor;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *digitText;
@property (nonatomic) double scale;
@property (nonatomic) long long appearance;

+ (id)_fontForAppearance:(long long)a0 forDevice:(id)a1;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFonts;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_createLabel;
- (void)applyColor;
- (id)initForDevice:(id)a0;
- (void)prepareAppearance:(long long)a0;
- (void)setDimmingFactor:(double)a0 isUpper:(BOOL)a1;

@end
