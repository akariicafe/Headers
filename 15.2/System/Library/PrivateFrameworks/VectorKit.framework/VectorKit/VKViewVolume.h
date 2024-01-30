@interface VKViewVolume : NSObject {
    struct Matrix<double, 3, 1> { double _e[3]; } _corners[8];
}

@property (readonly, nonatomic) const void *corners;

- (void)updateWithFrustum:(struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; })a0 matrix:(const void *)a1;
- (struct Matrix<double, 3, 1> { double x0[3]; })lerpPoint:(float *)a0;
- (id).cxx_construct;

@end
