@interface SBHRippleSimulation : NSObject {
    unsigned long long _rippleWidth;
    unsigned long long _rippleHeight;
    unsigned long long _rippleResolution;
    unsigned long long _rippleStyle;
    double _rippleTouchRadius;
    double _rippleTimeStep;
    double _rippleTouchHeight;
    double *_positionBuffer;
    double *_velocityBuffer;
}

@property (nonatomic, getter=isSettled) BOOL settled;

- (void)clear;
- (void)step:(double)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })convertGridToRippleCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 resolution:(unsigned long long)a2 style:(unsigned long long)a3;
- (void)createRippleAtGridCoordinate:(struct CGPoint { double x0; double x1; })a0 strength:(double)a1;
- (double)zPositionForGridCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForGridCoordinate:(struct CGPoint { double x0; double x1; })a0;

@end
