@class NSString, UIImageView, _TtC12GameCenterUI17GKPlayerGroupView, UILabel, UIView, UILongPressGestureRecognizer;
@protocol GKDashboardPickerPlayerGroupCellDelegate;

@interface GKDashboardPickerPlayerGroupCell : UICollectionViewCell

@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIView *iconContainer;
@property (weak, nonatomic) UILabel *subtitle;
@property (weak, nonatomic) UILabel *title;
@property (weak, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) UIImageView *checkmark;
@property (weak, nonatomic) UIImageView *messageIcon;
@property (weak, nonatomic) UIView *ringView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (retain, nonatomic) NSString *originalSubtitle;
@property (retain, nonatomic) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView;
@property (nonatomic) BOOL canExpand;
@property (nonatomic) BOOL lineVisible;
@property (nonatomic) BOOL usesClearBackground;
@property (weak, nonatomic) id<GKDashboardPickerPlayerGroupCellDelegate> groupCellDelegate;
@property (retain, nonatomic) NSString *searchText;

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)reuseIdentifierAX;

- (void)awakeFromNib;
- (void)handleLongPress:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setLineVisible:(BOOL)a0;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;
- (BOOL)lineVisible;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)a0;
- (void)updateTitleForSearchText;

@end
