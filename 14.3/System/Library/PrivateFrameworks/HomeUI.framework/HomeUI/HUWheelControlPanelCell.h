@class UIView, NSString, NSArray, NSFormatter, HUWheelControlView, HUWheelControlPopUpButton, UILabel, NSNumber;

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) HUWheelControlPopUpButton *wheelButton;
@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *stepValue;
@property (retain, nonatomic) NSFormatter *valueFormatter;
@property (retain, nonatomic) NSArray *wheelValues;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (retain, nonatomic) HUWheelControlView *wheelView;
@property (nonatomic) BOOL wheelViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)_defaultValueFormatter;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)wheelControlView:(id)a0 didUpdateValue:(id)a1;
- (id)allControlViews;
- (void)_generateWheelValuesWithMinValue:(double)a0 maxValue:(double)a1 stepValue:(double)a2;
- (id)_defaultMaxValue;
- (id)_defaultMinValue;
- (id)_defaultStepValue;

@end
