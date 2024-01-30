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

- (void)setSelected:(BOOL)a0;
- (id)_contentForState:(unsigned long long)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;
- (void)_setupImageView;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)_setContent:(id)a0 forState:(unsigned long long)a1;
- (void)resetToDefaults;
- (void).cxx_destruct;
- (void)_updateImageView;
- (id)_currentImage;
- (id)imageForState:(unsigned long long)a0;
- (id)colorForState:(unsigned long long)a0;
- (void)setColor:(id)a0 forState:(unsigned long long)a1;
- (void)_resetAllValues;
- (void)_layoutImageView;
- (BOOL)_setContentPropertyKey:(id)a0 withValue:(id)a1 forState:(unsigned long long)a2;
- (void)_updateFormatter;
- (void)_updateRingVisibility;
- (void)_updateSubviewColors;
- (void)_updateSubviewValues;
- (void)_updateSubviewVisibility;

@end
