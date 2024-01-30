@class UILabel, NSString;

@interface WFVariableConfigurationInfoView : UIView

@property (weak, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *subheading;

- (void).cxx_destruct;
- (void)updateLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
