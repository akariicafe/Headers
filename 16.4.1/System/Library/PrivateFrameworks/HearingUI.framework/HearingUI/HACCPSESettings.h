@class HUITitleValueSlider, NSNumberFormatter, UIVisualEffectView, UILabel, UIView, NSString;
@protocol HACCContentModuleDelegate;

@interface HACCPSESettings : UIView <HACCContentModule> {
    BOOL _didSetVibrancy;
}

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) UIVisualEffectView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HUITitleValueSlider *amplificationSlider;
@property (retain, nonatomic) UIView *balanceContainer;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) HUITitleValueSlider *balanceSlider;
@property (retain, nonatomic) UIVisualEffectView *toneContainer;
@property (retain, nonatomic) UILabel *toneLabel;
@property (retain, nonatomic) HUITitleValueSlider *toneSlider;
@property (retain, nonatomic) HUITitleValueSlider *noiseSupressorSlider;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateValue;
- (void)updateAccessibilityBalanceValue;
- (void)amplificationSliderDidChange:(id)a0;
- (void)balanceSliderDidChange:(id)a0;
- (id)contentValue;
- (void)noiseSliderDidChange:(id)a0;
- (void)toneSliderDidChange:(id)a0;
- (void)updateAccessibilityToneValue;

@end
