@interface UISTransform3DGrader : NSObject {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _allowedRotations;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _allowedScales;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _allowedSkews;
}

- (id).cxx_construct;
- (void)allowRotations:(const double *)a0 count:(unsigned long long)a1 lowerMultiplier:(double)a2 lowerConstant:(double)a3 upperMultiplier:(double)a4 upperConstant:(double)a5;
- (void)allowSkews:(const double *)a0 count:(unsigned long long)a1;
- (void)allowRotations:(const double *)a0 count:(unsigned long long)a1;
- (void)allowSkews:(const double *)a0 count:(unsigned long long)a1 lowerMultiplier:(double)a2 lowerConstant:(double)a3 upperMultiplier:(double)a4 upperConstant:(double)a5;
- (unsigned long long)gradeTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)allowScales:(const double *)a0 count:(unsigned long long)a1 lowerMultiplier:(double)a2 lowerConstant:(double)a3 upperMultiplier:(double)a4 upperConstant:(double)a5;
- (void)allowScales:(const double *)a0 count:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
