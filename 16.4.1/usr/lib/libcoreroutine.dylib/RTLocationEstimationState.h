@interface RTLocationEstimationState : NSObject {
    long long i;
    double time;
    double X[2];
    double errPro[2];
    double errEst[2];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimestamp:(double)a0;
- (id)init;
- (double)timestamp;
- (id)description;
- (long long)i;
- (void)updateMotionX:(double)a0 motionY:(double)a1 dt:(double)a2 error:(double)a3;
- (double)errorProWithIndex:(unsigned long long)a0;
- (double)estimateWithIndex:(unsigned long long)a0;
- (double)estimatedAccuracy;
- (void)increaseIndex;
- (void)resetIndex;
- (void)updateObservationX:(double)a0 observationY:(double)a1 sigmaX:(double)a2 sigmaY:(double)a3;
- (void)updatePostObservationDeltaX:(double)a0 observationDeltaY:(double)a1 errProX:(double)a2 errProY:(double)a3 sigmaX:(double)a4 sigmaY:(double)a5;

@end
