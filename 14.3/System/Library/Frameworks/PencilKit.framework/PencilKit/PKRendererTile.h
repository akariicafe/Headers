@class NSUUID, PKRendererTileProperties, NSArray;

@interface PKRendererTile : CALayer {
    _Atomic double _cachedContentsScale;
    _Atomic long long _renderCount;
    _Atomic double _lastUsedTimestamp;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) PKRendererTileProperties *properties;
@property (readonly, nonatomic) double drawingContentsScale;
@property (readonly, nonatomic) double lastUsedTimestamp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingFrame;
@property (copy, nonatomic) NSArray *renderedStrokes;
@property BOOL outOfDate;
@property (readonly) long long renderCount;
@property (nonatomic) long long currentlyRenderingCount;

+ (double)tileSizeForLevel:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameForLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1;

- (void)cancel;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (double)lastUsedTimestamp;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDisableTransactionActions:(BOOL)a0;
- (id)initWithLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 drawingScale:(double)a2 contentsScale:(double)a3;
- (void)updateLastUsedTimestamp;
- (double)drawingContentsScale;
- (void)updateFrameForScale:(double)a0;
- (void)showDebugLayer;

@end
