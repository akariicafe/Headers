@interface PMRoundProgressLayer : CALayer

@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;

@end
