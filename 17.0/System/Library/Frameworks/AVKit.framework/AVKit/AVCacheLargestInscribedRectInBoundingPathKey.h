@interface AVCacheLargestInscribedRectInBoundingPathKey : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double aspectRatio;

- (BOOL)isEqual:(id)a0;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 aspectRatio:(double)a1;

@end
