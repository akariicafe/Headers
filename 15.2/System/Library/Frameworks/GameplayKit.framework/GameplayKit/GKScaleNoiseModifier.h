@interface GKScaleNoiseModifier : GKNoiseModifier {
    void /* unknown type, empty encoding */ _factor;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithFactor:(SEL)a0;
- (id)initWithInputModuleCount:(unsigned long long)a0;

@end
