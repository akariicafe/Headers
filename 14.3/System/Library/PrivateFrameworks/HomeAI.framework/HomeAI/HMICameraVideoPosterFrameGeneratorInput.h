@interface HMICameraVideoPosterFrameGeneratorInput : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } generationFrequency;
@property (readonly) unsigned long long frameHeight;

- (id)initWithGenerationFrequency:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andPosterFrameHeight:(unsigned long long)a1;

@end
