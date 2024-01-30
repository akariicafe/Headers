@class UIStackView, NSArray, UIImageView, NSString, UILabel, CNAvatarViewController, HFItem;
@protocol HUResizableCellDelegate;

@interface HUFaceCropTableCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIStackView *labelsStack;
@property (retain, nonatomic) UIImageView *faceCropView;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) BOOL useTintColor;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)_updateTitleColor;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
