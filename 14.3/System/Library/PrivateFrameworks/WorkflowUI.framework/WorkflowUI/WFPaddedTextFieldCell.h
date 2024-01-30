@class WFPaddedTextField;

@interface WFPaddedTextFieldCell : UITableViewCell

@property (readonly, nonatomic) WFPaddedTextField *textField;
@property (nonatomic) double leftOffset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
