@interface TIGaussianErrorGenerator : TIErrorGenerator {
    float _globalStdevX;
    float _globalStdevY;
    float _perTouchStdevX;
    float _perTouchStdevY;
    struct CGPoint { double x; double y; } _globalBias;
}

- (id)initWithAttributes:(id)a0;
- (void)reset;
- (struct CGPoint { double x0; double x1; })globalBias;
- (struct CGPoint { double x0; double x1; })persistentBiasForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })randomErrorForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })randomPointInDistribution;
- (struct CGPoint { double x0; double x1; })randomPointWithStandardDeviationX:(float)a0 Y:(float)a1;
- (struct CGPoint { double x0; double x1; })randomTargetForSpaceBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateGlobalBias;

@end
