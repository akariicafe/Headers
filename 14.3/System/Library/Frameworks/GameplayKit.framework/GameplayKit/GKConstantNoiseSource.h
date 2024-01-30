@interface GKConstantNoiseSource : GKNoiseSource

@property (nonatomic) double value;

+ (id)constantNoiseWithValue:(double)a0;

- (id)init;
- (id)initWithValue:(double)a0;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;

@end
