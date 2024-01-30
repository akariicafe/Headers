@class CNTransportButton, CNContactAction, UILabel, CNCardActionGroupItem;

@interface CNContactActionCell : CNLabeledCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CNTransportButton *transportIcon;
@property (readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
@property (readonly, nonatomic) CNContactAction *action;

+ (BOOL)shouldIndentWhileEditing;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)labelView;
- (id)variableConstraints;
- (double)minCellHeight;
- (id)rightMostView;
- (BOOL)shouldPerformDefaultAction;
- (void)setLabelTextAttributes:(id)a0;
- (void)setCardGroupItem:(id)a0;

@end
