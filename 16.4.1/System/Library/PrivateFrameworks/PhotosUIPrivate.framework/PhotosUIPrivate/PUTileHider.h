@class NSMutableDictionary, PUTilingView;

@interface PUTileHider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_hiddenTileControllersByLayoutInfo;
@property (readonly, nonatomic) double _animationDuration;
@property (readonly, nonatomic) PUTilingView *tilingView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)hideTilesAtIndexPath:(id)a0 withKinds:(id)a1 dataSourceIdentifier:(id)a2 animated:(BOOL)a3;
- (id)initWithTilingView:(id)a0;
- (void)reattachTiles;
- (void)unhideTilesAnimated:(BOOL)a0;

@end
