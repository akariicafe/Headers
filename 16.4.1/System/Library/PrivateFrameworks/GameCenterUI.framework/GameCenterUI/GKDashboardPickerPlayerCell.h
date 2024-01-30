@class UILabel, NSString, UIView, GKDashboardPlayerPhotoView, NSLayoutConstraint;

@interface GKDashboardPickerPlayerCell : GKFocusHighlightingCollectionViewCell

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UILabel *subtitle;
@property (weak, nonatomic) UILabel *title;
@property (weak, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) UIView *monogramColorView;
@property (weak, nonatomic) UIView *backView;
@property (weak, nonatomic) UIView *ringView;
@property (retain, nonatomic) NSString *originalSubtitle;
@property (nonatomic) BOOL lineVisible;
@property (nonatomic) BOOL selectable;
@property (nonatomic) BOOL usesClearBackground;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)setLineVisible:(BOOL)a0;
- (void)configureWithPlayer:(id)a0 isCoreRecent:(BOOL)a1 matchedContactName:(id)a2 onlyShowContactName:(BOOL)a3;
- (BOOL)lineVisible;
- (id)subtitleForPlayer:(id)a0 isCoreRecent:(BOOL)a1 matchedContactName:(id)a2 onlyShowContactName:(BOOL)a3;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)a0;

@end
