@class NSLayoutConstraint;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSLayoutConstraint *buttonsTopConstraint;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateVisibleButtons;
- (void)_hideAllButtons;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setShowsLocation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setShowsTUConversationStatus:(BOOL)a0;
- (void)configureWithViewModel:(id)a0;
- (void)_initConstraints;

@end
