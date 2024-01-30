@interface VKViewVolume : NSObject {
    struct Matrix<double, 3, 1> { double _e[3]; } _corners[8];
}

@property (readonly, nonatomic) const struct Matrix<double, 3, 1> { double x0[3]; } *corners;

- (struct Matrix<double, 3, 1> { double x0[3]; })lerpPoint:(float *)a0;
- (void)updateWithFrustum:(struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; })a0 matrix:(const struct Matrix<double, 4, 4> { double x0[16]; } *)a1;
- (id).cxx_construct;

@end
