@interface FigBaseCABackdropLayer : CABackdropLayer <FigPiPableLayer>

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)a0;

- (void)addSublayer:(id)a0;
- (id)actionForKey:(id)a0;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromSuperlayer;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (id)init;
- (void)setSublayers:(id)a0;
- (void)insertSublayer:(id)a0 below:(id)a1;

@end
