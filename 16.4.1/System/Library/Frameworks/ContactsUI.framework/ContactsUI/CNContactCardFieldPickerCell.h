@class CNContactCardFieldItem;

@interface CNContactCardFieldPickerCell : UITableViewCell

@property (nonatomic) BOOL displaysValue;
@property (retain, nonatomic) CNContactCardFieldItem *item;

+ (double)estimatedHeightDisplayingValue:(BOOL)a0;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)attributedDisplayText;
- (void)setConfiguration;

@end
