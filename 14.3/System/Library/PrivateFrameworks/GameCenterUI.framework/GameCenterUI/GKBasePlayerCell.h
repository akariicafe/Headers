@class GKPlayer, NSDictionary, UILabel, GKDashboardPlayerPhotoView;

@interface GKBasePlayerCell : GKCollectionViewCell

@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView;
@property (retain, nonatomic) NSDictionary *metricsOverrides;

+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)itemHeightList;
+ (id)phoneMetrics;
+ (id)itemHeightListForIdiom:(long long)a0;
+ (id)padMetrics;
+ (double)defaultRowHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (id)popoverSourceView;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)setRepresentedItem:(id)a0;
- (BOOL)canRemoveItem;

@end
