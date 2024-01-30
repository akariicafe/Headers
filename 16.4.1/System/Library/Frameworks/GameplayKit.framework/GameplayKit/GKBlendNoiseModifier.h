@interface GKBlendNoiseModifier : GKNoiseModifier {
    double _lowerBound;
    double _upperBound;
    double _blendDistance;
}

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (id)initWithSelectionRangeLowerBound:(double)a0 selectionRangeUpperBound:(double)a1 selectionBoundaryBlendDistance:(double)a2;
- (int)requiredInputModuleCount;

@end
