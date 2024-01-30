@class NSString, NSNumberFormatter, UIVisualEffectView, UILabel, UIView, HUIStepSlider;
@protocol HACCContentModuleDelegate;

@interface HACCSlider : UIControl <HACCContentModule> {
    UIVisualEffectView *_titleContainer;
    UIView *_subtitleContainer;
}

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) long long style;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) double value;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (BOOL)enabled;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)updateValue;
- (id)contentValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andModule:(unsigned long long)a1;
- (void)setValue:(double)a0 andNotify:(BOOL)a1;
- (BOOL)shouldShowMinMaxImages;
- (void)sliderDidChange:(id)a0;
- (void)updateValueString;

@end
