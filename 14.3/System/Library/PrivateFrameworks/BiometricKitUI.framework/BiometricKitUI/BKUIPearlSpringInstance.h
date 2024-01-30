@class FLSpring;

@interface BKUIPearlSpringInstance : NSObject {
    FLSpring *springs[3];
    void /* unknown type, empty encoding */ _value;
    struct { void /* unknown type, empty encoding */ columns[4]; } _matrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _initialMatrix;
    void /* unknown type, empty encoding */ _color;
    float _alphaFactor;
    float _alphaDecay;
    float _scale;
    float _scaleDest;
}

@property unsigned long long axisOrientation;
@property (nonatomic) unsigned long long springState;
@property (nonatomic) void /* unknown type, empty encoding */ target;
@property (nonatomic) void /* unknown type, empty encoding */ value;
@property (nonatomic) BOOL grayscale;

- (void)setParameters:(struct FLSpringParameters { double x0; double x1; double x2; double x3; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })matrix;
- (void).cxx_destruct;
- (void)step:(double)a0;
- (void /* unknown type, empty encoding */)velocity;
- (void /* unknown type, empty encoding */)color;
- (id)initWithInitialRotation:(id)a0 color:(SEL)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })createAxisRotationMatrix:(SEL)a0;

@end
