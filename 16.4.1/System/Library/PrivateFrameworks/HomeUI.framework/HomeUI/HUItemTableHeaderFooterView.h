@class UITextView, NSArray, NSString, NSLayoutConstraint, NSAttributedString;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *bottomSpacingConstraint;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) BOOL includeBottomSpacing;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (double)_bottomSpacing;

@end
