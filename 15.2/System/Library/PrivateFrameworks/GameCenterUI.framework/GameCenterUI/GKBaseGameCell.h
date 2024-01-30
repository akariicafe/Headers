@class GKGame, UIImageView, GKGameRecord, UILabel;

@interface GKBaseGameCell : GKCollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKGameRecord *gameRecord;

+ (double)defaultRowHeight;
+ (id)itemHeightList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)setRepresentedItem:(id)a0;

@end
