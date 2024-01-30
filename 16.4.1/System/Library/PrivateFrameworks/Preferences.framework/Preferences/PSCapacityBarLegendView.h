@class UIColor, NSString, PSLegendColorView, UILabel;

@interface PSCapacityBarLegendView : UIView {
    PSLegendColorView *_legendColor;
    UILabel *_legendLabel;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;
- (void)createConstraints;
- (id)initWithCapacityBarCategory:(id)a0;

@end
