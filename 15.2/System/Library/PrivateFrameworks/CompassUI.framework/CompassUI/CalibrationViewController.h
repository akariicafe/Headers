@class CalibrationBallView, NSMutableArray, CAShapeLayer, UILabel, CompassBackgroundView, UIButton;

@interface CalibrationViewController : UIViewController {
    CompassBackgroundView *_compassBackgroundView;
    CAShapeLayer *_compassBackgroundViewMask;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    CalibrationBallView *_ballView;
    struct CGPoint { double x; double y; } _compassOriginPoint;
    NSMutableArray *_calibrationConstraints;
    float *_ticsShowingArray;
    double _angleToRim;
    double _calibrationAngle;
    int _quantizationType;
    double _previousTimestamp;
    double _startTicAngle;
    BOOL _ignoreMotionUpdates;
    BOOL _shouldCompleteTics;
    double _previousHorizontalAngle;
    void /* unknown type, empty encoding */ _previousGravity;
    unsigned long long _numCompleteTics;
    double _compassRadius;
}

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)userDefaultsChanged:(id)a0;
- (void)addConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)cancel;
- (void)reset;
- (void)setMotion:(id)a0;
- (id)initWithOriginPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateSizes;
- (id)updatedMaskingPath;
- (void)hideAllTics;
- (void)updateMaskingPath;
- (float)quantizedPercentage:(double)a0 forAngle:(double)a1;
- (void)showTicsBetweenStartAngle:(double)a0 endAngle:(double)a1 withCredit:(double)a2;
- (double)_correctedAngleForCurrentOrientation:(double)a0;
- (void)setBallAngle:(double)a0 tiltAngle:(double)a1;
- (void)showTicAtAngle:(double)a0 withCredit:(double)a1;
- (BOOL)circleIsCompleted;
- (double)completeCircle;

@end
