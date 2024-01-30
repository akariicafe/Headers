@class NSLayoutConstraint;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSLayoutConstraint *buttonsTopConstraint;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)a0;
- (void)_updateVisibleButtons;
- (void)_hideAllButtons;
- (void)_initConstraints;
- (void)setShowsLocation:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
