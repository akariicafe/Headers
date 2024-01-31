@class CNContactCardFieldItem;

@interface CNContactCardFieldPickerCell : UITableViewCell

@property (nonatomic) BOOL displaysValue;
@property (retain, nonatomic) CNContactCardFieldItem *item;

+ (double)estimatedHeightDisplayingValue:(BOOL)a0;

- (id)init;
- (void)setConfiguration;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)attributedDisplayText;

@end
