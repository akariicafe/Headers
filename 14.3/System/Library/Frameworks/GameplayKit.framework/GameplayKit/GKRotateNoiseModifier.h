@interface GKRotateNoiseModifier : GKNoiseModifier {
    void /* unknown type, empty encoding */ _radians;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithRadians:(SEL)a0;
- (id)initWithInputModuleCount:(unsigned long long)a0;

@end
