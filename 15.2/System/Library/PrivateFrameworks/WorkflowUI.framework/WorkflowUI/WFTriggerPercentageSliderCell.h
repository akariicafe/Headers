@class UISlider, UILabel;
@protocol WFTriggerPercentageSliderCellDelegate;

@interface WFTriggerPercentageSliderCell : UITableViewCell

@property (readonly, nonatomic) UISlider *slider;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) double stepValue;
@property (nonatomic) double sliderValue;
@property (weak, nonatomic) id<WFTriggerPercentageSliderCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)sliderValueChanged:(id)a0;
- (void)configureWithInitialValue:(double)a0 maximumValue:(double)a1 minimumValue:(double)a2 stepValue:(double)a3;
- (double)roundValue:(double)a0 toNearestStep:(double)a1;

@end
