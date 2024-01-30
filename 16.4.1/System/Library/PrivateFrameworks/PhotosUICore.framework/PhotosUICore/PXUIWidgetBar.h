@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar

@property (readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile;

- (void)updateView;
- (void).cxx_destruct;
- (void)checkInTile:(id)a0;
- (id)checkOutTileWithKind:(long long)a0;
- (id)createTileAnimator;

@end
