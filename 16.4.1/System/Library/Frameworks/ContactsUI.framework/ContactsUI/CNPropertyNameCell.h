@class UIResponder, CNPropertyGroupItem, UITextField;
@protocol CNPropertyCellDelegate;

@interface CNPropertyNameCell : CNContactCell

@property (retain, nonatomic) CNPropertyGroupItem *propertyItem;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UIResponder *firstResponderItem;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)shouldIndentWhileEditing;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)constantConstraints;
- (id)displayStringForValue:(id)a0;
- (double)minCellHeight;
- (id)placeholderString;
- (void)setCardGroupItem:(id)a0;
- (void)textFieldChanged:(id)a0;

@end
