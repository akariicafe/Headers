@interface LegacyTileLayer : CALayer

@property (nonatomic) unsigned int paintCount;
@property (nonatomic) void *tileGrid;
@property (readonly, nonatomic) BOOL isRenderingInContext;

- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForKey:(id)a0;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)renderInContext:(struct CGContext { } *)a0;

@end
