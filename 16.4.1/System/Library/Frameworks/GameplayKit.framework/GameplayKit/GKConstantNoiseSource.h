@interface GKConstantNoiseSource : GKNoiseSource

@property (nonatomic) double value;

+ (id)constantNoiseWithValue:(double)a0;

- (id)initWithValue:(double)a0;
- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;

@end
