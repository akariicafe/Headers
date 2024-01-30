@interface TSDSimpleTileProvider : TSDTileProvider

@property (nonatomic) SEL action;

- (BOOL)isTargetOpaque;
- (void)drawTargetInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (BOOL)canTargetDrawInParallel;

@end
