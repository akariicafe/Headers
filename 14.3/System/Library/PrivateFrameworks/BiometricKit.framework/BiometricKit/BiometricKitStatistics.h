@class NSDate;

@interface BiometricKitStatistics : NSObject {
    BOOL _fingerOn;
    BOOL _enrolling;
    BOOL _badImagePerFingerDown;
    NSDate *_enrollmentStarTime;
    unsigned int _touchesPerEnroll;
    unsigned int _badImagesPerEnroll;
    unsigned int _rejectedImagesPerEnroll;
    unsigned int _primaryClusterAdditions;
    unsigned int _primaryClusterFailedAdditions;
    unsigned int _otherClustersAdditions;
    unsigned int _joinEvents;
    double _area;
    double _primaryClusterArea;
}

+ (id)statistics;

- (void)statusMessage:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)initEnrollmentValues;
- (void)enrollProgress:(id)a0;
- (void)enroll:(int)a0;
- (void)enrollResult:(id)a0 componentSet:(struct { int x0; int x1; struct **x2; int x3; int x4; int x5; int x6; int x7; struct **x8; short x9; short x10; int x11; BOOL x12; } *)a1;

@end
