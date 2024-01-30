@interface GKConstantPowerNoiseModifier : GKNoiseModifier {
    double _power;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithConstantPower:(double)a0;
- (id)initWithInputModuleCount:(unsigned long long)a0;

@end
