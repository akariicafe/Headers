@interface HUMosaicLayoutGeometry : NSObject

@property (nonatomic) struct HUGridSize { long long rowsDown; long long columnsAcross; } gridSize;
@property (nonatomic) double cellSize;
@property (nonatomic) double cellSpacing;
@property (nonatomic) BOOL isPortrait;

- (id)description;

@end
