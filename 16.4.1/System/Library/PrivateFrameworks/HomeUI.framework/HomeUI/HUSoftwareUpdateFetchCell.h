@class UIStackView, HUIconView, UIActivityIndicatorView, HFItem, UIView, UILabel, NSString;
@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateFetchCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UIView *titleSpinnerView;
@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) HUIconView *iconView;
@property (nonatomic) unsigned long long iconSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
