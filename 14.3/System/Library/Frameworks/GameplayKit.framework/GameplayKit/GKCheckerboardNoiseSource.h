@interface GKCheckerboardNoiseSource : GKNoiseSource

@property (nonatomic) double squareSize;

+ (id)checkerboardNoiseWithSquareSize:(double)a0;

- (id)init;
- (id)initWithSquareSize:(double)a0;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;

@end
