@interface VCPVideoFacePoseFilter : NSObject {
    struct Matrix<float, 12U, 1U, false> { float m_data[12]; } _previousState;
    struct Matrix<float, 12U, 12U, false> { float m_data[144]; } _previousCovar;
    BOOL _previousStateIsValid;
}

- (id).cxx_construct;
- (void)reset;
- (int)eulerAnglesToRotation:(float[3])a0 R:(float[3][3])a1;
- (int)filteringPose:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (int)kalmanFiltering:(float[3])a0 T:(float[3])a1;
- (int)rotationToEulerAngles:(float[3][3])a0 angles:(float[3])a1;

@end
