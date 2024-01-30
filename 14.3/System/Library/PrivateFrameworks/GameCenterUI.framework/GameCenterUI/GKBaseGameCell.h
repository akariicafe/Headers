@class GKGame, UIImageView, GKGameRecord, UILabel;

@interface GKBaseGameCell : GKCollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKGameRecord *gameRecord;

+ (id)itemHeightList;
+ (double)defaultRowHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)setRepresentedItem:(id)a0;

@end
