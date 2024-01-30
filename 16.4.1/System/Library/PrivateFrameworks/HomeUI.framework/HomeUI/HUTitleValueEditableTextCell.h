@class UIFont, NSArray, NSString, UITextField, UILabel, NSLayoutConstraint, HFItem;
@protocol HUResizableCellDelegate;

@interface HUTitleValueEditableTextCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *titleLabelConstraints;
@property (retain, nonatomic) NSArray *valueTextFieldConstraints;
@property (retain, nonatomic) NSLayoutConstraint *labelsSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL hideTitle;
@property (readonly, nonatomic) UITextField *valueTextField;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_updateTitle;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_addTitleLabel;
- (void)_addValueTextField;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
