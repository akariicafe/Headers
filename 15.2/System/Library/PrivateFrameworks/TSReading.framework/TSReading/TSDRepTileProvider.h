@interface TSDRepTileProvider : TSDTileProvider

- (void)beginDrawingOperation;
- (void)endDrawingOperation;
- (BOOL)isTargetOpaque;
- (void)drawTargetInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (BOOL)canTargetDrawInParallel;
- (id)initWithRep:(id)a0;

@end
