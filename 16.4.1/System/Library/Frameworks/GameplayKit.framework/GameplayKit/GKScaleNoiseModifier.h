@interface GKScaleNoiseModifier : GKNoiseModifier {
    void /* unknown type, empty encoding */ _factor;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)initWithFactor:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
