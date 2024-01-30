@class UILabel, HKListItemLabel;

@interface HKTitledListItemLabel : UIView

@property (retain, nonatomic) HKListItemLabel *listItemLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)createTitledListItem:(id)a0 listBody:(id)a1 itemNumber:(int)a2;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)layoutSubviews;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)initWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 title:(id)a2 body:(id)a3;
- (id)_bodyLabelFont;
- (double)_listItemLabelToBody;
- (double)_bodyLabelToBottom;

@end
