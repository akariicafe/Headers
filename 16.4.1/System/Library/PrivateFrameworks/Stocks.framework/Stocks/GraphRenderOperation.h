@class NSArray, StockGraphImageSet, StockChartDisplayMode;
@protocol GraphRenderOperationDelegate;

@interface GraphRenderOperation : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) struct CGPoint { double x0; double x1; } *points;
@property (retain, nonatomic) NSArray *linePointCounts;
@property (retain, nonatomic) NSArray *dottedLinePositions;
@property (retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly;
@property (nonatomic) struct { double x0; unsigned long long x1; } *volumeBars;
@property (nonatomic) double volumeBarWidth;
@property (nonatomic) unsigned long long maxVolume;
@property (nonatomic) unsigned int volumeCount;
@property (weak, nonatomic) id<GraphRenderOperationDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } graphSize;
@property (nonatomic) struct CGSize { double width; double height; } volumeGraphSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } graphInsets;
@property (retain, nonatomic) StockGraphImageSet *graphImageSet;
@property (nonatomic) BOOL roundLineCaps;
@property (retain, nonatomic) StockChartDisplayMode *displayMode;

- (void)cancel;
- (void).cxx_destruct;
- (void)render;
- (void)renderLineGraph;
- (struct CGSize { double x0; double x1; })lineGraphSize;
- (void)renderGraphLineInContext:(struct CGContext { } *)a0 withColor:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (void)renderVolumeGraph;

@end
