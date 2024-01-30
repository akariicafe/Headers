@class UIStackView, HFItem, NSArray, NSString, UITextView, UIButton, NSLayoutConstraint, UIActivityIndicatorView, UILabel;
@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) NSArray *hiddenMessageTextViewConstraints;
@property (retain, nonatomic) NSArray *visibleMessageTextViewConstraints;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIStackView *titleSpinnerStackView;
@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *spinnerBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionBottomConstraint;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (retain, nonatomic) HFItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_setCornerRadius:(double)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_configureConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (void)_updateErrorLabelConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (id)_visibleMessageTextViewConstraints;

@end
