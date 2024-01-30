@class UIColor, NSMapTable, UIImageView, NSNumberFormatter, UILabel, PUPhotoEditCircularIndicatorView;

@interface PUPhotoEditAdjustmentControl : UIControl

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PUPhotoEditCircularIndicatorView *circularIndicatorView;
@property (retain, nonatomic) NSMapTable *stateToContentMap;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *alternateColor;
@property (nonatomic) BOOL valueChanged;
@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double identityValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) BOOL shouldShowValueLabel;
@property (nonatomic) BOOL displayMappedValue;
@property (nonatomic) BOOL shouldShowCircularRing;
@property (nonatomic) BOOL shouldScaleDownImage;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupImageView;
- (id)_contentForState:(unsigned long long)a0;
- (void)resetToDefaults;
- (void)setSelected:(BOOL)a0;
- (void)_setContent:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_currentImage;
- (id)imageForState:(unsigned long long)a0;
- (void)_updateSubviews;
- (void)_layoutImageView;
- (void)_updateImageView;
- (void)_resetAllValues;
- (BOOL)_setContentPropertyKey:(id)a0 withValue:(id)a1 forState:(unsigned long long)a2;
- (void)setColor:(id)a0 forState:(unsigned long long)a1;
- (id)colorForState:(unsigned long long)a0;
- (void)_updateRingVisibility;
- (void)_updateSubviewVisibility;
- (void)_updateSubviewColors;
- (void)_updateFormatter;
- (void)_updateSubviewValues;

@end
