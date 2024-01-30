@interface VKRunningCurve : NSObject {
    struct { struct optional<gm::Matrix<double, 3, 1> > { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct Matrix<double, 3, 1> { double _e[3]; } type; } _value; } position; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _p0;
    double _t0;
    struct { struct optional<gm::Matrix<double, 3, 1> > { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct Matrix<double, 3, 1> { double _e[3]; } type; } _value; } position; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _p1;
    double _t1;
    struct { struct optional<gm::Matrix<double, 3, 1> > { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct Matrix<double, 3, 1> { double _e[3]; } type; } _value; } position; struct Matrix<double, 3, 1> { double _e[3]; } tangent; BOOL tangentValid; } _pu;
    double _tu;
    struct { double mb[4][3]; } _mb;
    BOOL _mbValid;
}

- (id)init;
- (void)appendPosition:(struct Matrix<double, 3, 1> { double x0[3]; })a0 atTime:(double)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (BOOL)hasStateAtTime:(double)a0;
- (id).cxx_construct;
- (struct { struct optional<gm::Matrix<double, 3, 1> > { BOOL x0; union ValueUnion { unsigned char x0[24]; struct Matrix<double, 3, 1> { double x0[3]; } x1; } x1; } x0; struct Matrix<double, 3, 1> { double x0[3]; } x1; BOOL x2; })stateAtTime:(double)a0;

@end
