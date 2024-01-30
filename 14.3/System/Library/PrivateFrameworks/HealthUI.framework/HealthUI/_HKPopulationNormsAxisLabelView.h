@class UIColor, UIFont, HKPopulationNormsAxisLabel, UILabel;

@interface _HKPopulationNormsAxisLabelView : UIView {
    UILabel *_rangeStartLabel;
    UILabel *_rangeSeparatorLabel;
    UILabel *_rangeEndLabel;
}

@property (readonly, nonatomic) HKPopulationNormsAxisLabel *axisLabel;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithLabel:(id)a0;

@end
