@interface _NTKPieChartLayer : CALayer

@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
