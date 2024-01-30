@class NSDictionary, NSArray;

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData> {
    NSDictionary *mPackage;
    NSArray *mLights;
}

+ (id)dataWithDictionary:(id)a0;

- (void)dealloc;
- (id)nameAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;
- (long long)typeAtIndex:(unsigned long long)a0;
- (id)packageName;
- (struct Color { float x0; float x1; float x2; float x3; })colorAtIndex:(unsigned long long)a0 redKey:(id)a1 greenKey:(id)a2 blueKey:(id)a3;
- (float)intensityAtIndex:(unsigned long long)a0;
- (long long)coordinateSpaceAtIndex:(unsigned long long)a0;
- (BOOL)enabledAtIndex:(unsigned long long)a0;
- (float)cutOffAngleAtIndex:(unsigned long long)a0;
- (float)dropOffRateAtIndex:(unsigned long long)a0;
- (struct Color { float x0; float x1; float x2; float x3; })ambientColorAtIndex:(unsigned long long)a0;
- (struct Color { float x0; float x1; float x2; float x3; })diffuseColorAtIndex:(unsigned long long)a0;
- (struct Color { float x0; float x1; float x2; float x3; })specularColorAtIndex:(unsigned long long)a0;
- (struct Vector3 { float x0; float x1; float x2; })attenuationAtIndex:(unsigned long long)a0;
- (struct Vector3 { float x0; float x1; float x2; })positionAtIndex:(unsigned long long)a0;
- (struct Vector3 { float x0; float x1; float x2; })directionAtIndex:(unsigned long long)a0;

@end
