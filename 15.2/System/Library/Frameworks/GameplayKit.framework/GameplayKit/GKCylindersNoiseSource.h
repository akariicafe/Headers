@interface GKCylindersNoiseSource : GKNoiseSource

@property (nonatomic) double frequency;

+ (id)cylindersNoiseWithFrequency:(double)a0;

- (id)init;
- (id)initWithFrequency:(double)a0;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;

@end
