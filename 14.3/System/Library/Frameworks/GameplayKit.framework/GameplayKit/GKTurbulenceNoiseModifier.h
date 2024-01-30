@class GKPerlinNoiseSource;

@interface GKTurbulenceNoiseModifier : GKNoiseModifier {
    double _power;
    double _frequency;
    double _roughness;
    int _seed;
    GKPerlinNoiseSource *_perlin[3];
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithFrequency:(double)a0 power:(double)a1 roughness:(double)a2 seed:(int)a3;
- (id)initWithInputModuleCount:(unsigned long long)a0;

@end
