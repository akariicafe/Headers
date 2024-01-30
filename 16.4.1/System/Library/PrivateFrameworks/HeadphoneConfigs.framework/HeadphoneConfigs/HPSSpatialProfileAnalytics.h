@class NSString;

@interface HPSSpatialProfileAnalytics : NSObject {
    double _enrollmentStartTime;
    double _faceEnrollmentTime;
    double _faceEnrollmentStartTime;
    double _rightEarEnrollmentStartTime;
    double _rightEarEnrollmentTime;
    double _rightEarFrontAngleTime;
    double _rightEarMidAngleTime;
    double _rightEarBackAngleTime;
    double _leftEarEnrollmentStartTime;
    double _leftEarEnrollmentTime;
    double _leftEarFrontAngleTime;
    double _leftEarMidAngleTime;
    double _leftEarBackAngleTime;
    double _soundProfileCreationStartTime;
    double _soundProfileCreationTime;
    unsigned char _leftEarOcclusionDetectCount;
    unsigned char _rightEarOcclusionDetectCount;
    double _frameDetectionStartTime;
    unsigned long long _frameCount;
    NSString *_result;
    BOOL _status;
    BOOL _submitted;
    NSString *_parentBundleID;
}

+ (BOOL)isRBSProcessHandleAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)updateLeftEarBackAnglelDuration;
- (void)incrementRightEarOcclusionCount;
- (void)updateRightEarMidAnglelDuration;
- (void)incrementFrameCount;
- (void)incrementLeftEarOcclusionCount;
- (void)initFrameRateDetection;
- (void)submitHPSSpatialProfileEnrollAnalytics;
- (void)submitHPSSpatialProfileResetAnalytics;
- (void)updateFaceEnrollDuration;
- (void)updateFaceEnrollStart;
- (void)updateLeftEarEnrollDuration;
- (void)updateLeftEarEnrollStart;
- (void)updateLeftEarFrontAnglelDuration;
- (void)updateLeftEarMidAnglelDuration;
- (void)updateRightEarBackAnglelDuration;
- (void)updateRightEarEnrollDuration;
- (void)updateRightEarEnrollStart;
- (void)updateRightEarFrontAnglelDuration;
- (void)updateSoundProfileCreationDuration;
- (void)updateSoundProfileCreationDurationStart;
- (void)updateStatus:(BOOL)a0 EnrollmentResult:(id)a1;

@end
