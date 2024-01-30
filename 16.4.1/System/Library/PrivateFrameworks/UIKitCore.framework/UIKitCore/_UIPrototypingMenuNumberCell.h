@class UIStackView, UILabel, _UIPrototypingMenuSlider, UITapGestureRecognizer;

@interface _UIPrototypingMenuNumberCell : _UIPrototypingMenuCell

@property (retain, nonatomic) UIStackView *floatValueStackView;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *maxLabel;
@property (retain, nonatomic) _UIPrototypingMenuSlider *slider;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double current;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_prototypingSettingDidChange;
- (void)_sliderDidChangeValue:(id)a0;
- (void)_tapRecognizerDidRecognizer:(id)a0;

@end
