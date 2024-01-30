@class UILabel, HKListItemLabel;

@interface HKTitledListItemLabel : UIView

@property (retain, nonatomic) HKListItemLabel *listItemLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)createTitledListItem:(id)a0 titleAccessibilityIdentifier:(id)a1 listBody:(id)a2 bodyAccessibilityIdentifier:(id)a3 itemNumber:(int)a4;
+ (id)createTitledListItem:(id)a0 listBody:(id)a1 itemNumber:(int)a2;

- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)_bodyLabelFont;
- (double)_bodyLabelToBottom;
- (double)_listItemLabelToBody;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)initWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 title:(id)a2 body:(id)a3;

@end
