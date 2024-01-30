@interface GKMoveNoiseModifier : GKNoiseModifier {
    void /* unknown type, empty encoding */ _delta;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithDelta:(SEL)a0;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
