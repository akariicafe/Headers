@class NSString;

@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator> {
    struct TSCERandGenerator { struct TSCECellRandSeed { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } x0; unsigned char x1[20]; unsigned char x2[20]; unsigned int x3; } x1; } *_randGenerator;
}

@property (nonatomic) unsigned long long seed;
@property (readonly, nonatomic) double randomDouble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)generateNewSeed;
+ (id)randomGeneratorFromPluginContext:(id)a0;
+ (id)randomGeneratorWithSeed:(id)a0;

- (id)initWithSeed:(id)a0;
- (void)dealloc;
- (double)doubleBetween:(double)a0 :(double)a1;
- (struct { float x0; float x1; float x2; })GLPoint3DRandomDirection;
- (struct { float x0; float x1; float x2; float x3; })GLPoint4DRandomPoint;
- (struct { float x0; float x1; })GLPoint2DRandomPoint;
- (struct { float x0; float x1; float x2; })GLPoint3DRandomPoint;
- (long long)intBetween:(long long)a0 :(long long)a1;

@end
