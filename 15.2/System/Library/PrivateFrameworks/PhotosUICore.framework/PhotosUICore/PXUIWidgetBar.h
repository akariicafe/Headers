@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar

@property (readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile;

- (void).cxx_destruct;
- (void)updateView;
- (id)createTileAnimator;
- (id)checkOutTileWithKind:(long long)a0;
- (void)checkInTile:(id)a0;

@end
