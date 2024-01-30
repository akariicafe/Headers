@class NSDictionary;

@interface GKNoiseMap : NSObject {
    float *_map;
}

@property (copy, nonatomic) NSDictionary *gradientColors;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ size;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ origin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ sampleCount;
@property (readonly, nonatomic, getter=isSeamless) BOOL seamless;

+ (id)noiseMapWithNoise:(id)a0;
+ (id)noiseMapWithNoise:(id)a0 size:(SEL)a1 origin:(id)a2 sampleCount:(BOOL)a3 seamless:(void /* unknown type, empty encoding */)a4;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithNoise:(id)a0;
- (id)initWithNoise:(id)a0 size:(SEL)a1 origin:(id)a2 sampleCount:(BOOL)a3 seamless:(void /* unknown type, empty encoding */)a4;
- (int)mapIndexX:(int)a0 y:(int)a1;
- (id)__colorData;
- (float)valueAtPosition:(SEL)a0;
- (float)interpolatedValueAtPosition:(SEL)a0;
- (void)setValue:(SEL)a0 atPosition:(float)a1;

@end
