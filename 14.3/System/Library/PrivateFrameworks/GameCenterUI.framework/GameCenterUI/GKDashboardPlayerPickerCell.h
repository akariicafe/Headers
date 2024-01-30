@class UIImageView, UIButton, NSLayoutConstraint;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell

@property (nonatomic) UIImageView *selectionView;
@property (nonatomic) UIButton *selectionButton;
@property (nonatomic) NSLayoutConstraint *nameConstraint;
@property (nonatomic) NSLayoutConstraint *selectionHorizontalConstraint;
@property (nonatomic) NSLayoutConstraint *selectionVerticalConstraint;
@property (nonatomic) NSLayoutConstraint *statusHeightConstraint;
@property (nonatomic) double nameInitialConstant;
@property (nonatomic) double selectionInitialHorizontalConstant;
@property (nonatomic) double selectionInitialVerticalConstant;
@property (nonatomic) double statusInitialConstant;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) BOOL showsLastPlayedStatusText;
@property (nonatomic) BOOL showsMessagesHandleInStatusText;

- (void)setPlayer:(id)a0;
- (void)setStatusWithAchievementEarnedPoints:(long long)a0 andDate:(id)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;

@end
