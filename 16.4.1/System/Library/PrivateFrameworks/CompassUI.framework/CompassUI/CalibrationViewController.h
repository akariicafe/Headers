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
- (void)cancel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setMotion:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)userDefaultsChanged:(id)a0;
- (void)addConstraints;
- (double)_correctedAngleForCurrentOrientation:(double)a0;
- (void)_updateSizes;
- (BOOL)circleIsCompleted;
- (double)completeCircle;
- (void)hideAllTics;
- (id)initWithOriginPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)quantizedPercentage:(double)a0 forAngle:(double)a1;
- (void)setBallAngle:(double)a0 tiltAngle:(double)a1;
- (void)showTicAtAngle:(double)a0 withCredit:(double)a1;
- (void)showTicsBetweenStartAngle:(double)a0 endAngle:(double)a1 withCredit:(double)a2;
- (void)updateMaskingPath;
- (id)updatedMaskingPath;

@end
