@interface GKCurveNoiseModifier : GKNoiseModifier {
    double *_parameters;
    double *_controlPoints;
    int _count;
}

- (void)dealloc;
- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithControlPoints:(id)a0;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
