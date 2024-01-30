@class UILabel, CNContact;

@interface CNContactViewFooterView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CNContact *contact;

- (id)init;
- (void).cxx_destruct;
- (void)updateLabelText;
- (void)setupSubviews;

@end
