@interface GKRotateNoiseModifier : GKNoiseModifier {
    void /* unknown type, empty encoding */ _radians;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (id)initWithRadians:(SEL)a0;
- (int)requiredInputModuleCount;

@end
