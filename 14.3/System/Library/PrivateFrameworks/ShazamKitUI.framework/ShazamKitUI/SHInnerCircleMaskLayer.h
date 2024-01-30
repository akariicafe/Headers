@interface SHInnerCircleMaskLayer : CALayer

@property (nonatomic) double innerCircleRelativeSize;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)setup;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
