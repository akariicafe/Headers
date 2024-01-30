@interface PBMirrorFilter : PBFilter {
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    BOOL firstTime;
}

@property struct CGPoint { double x; double y; } inputPoint;
@property float inputOrientation;

- (void)setDefaults;
- (BOOL)needsWrapMirror;
- (void)applyParametersToCIFilter:(BOOL)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)ciFilterName;

@end
