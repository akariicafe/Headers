@interface CPSPointsOfInterestPickerCell : UITableViewCell

@property (nonatomic) BOOL chosen;

+ (id)identifier;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setupViews;
- (void)setHighlighted:(BOOL)a0;

@end
