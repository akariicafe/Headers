@class NSMutableArray;

@interface UIKBHandwritingInputSpeedModel : NSObject {
    NSMutableArray *_recordedIntervals;
    NSMutableArray *_recordedSpeeds;
    double _lastStrokeTimeStamp;
    double _lastTouchTimeStamp;
    struct CGPoint { double x; double y; } _lastTouchLocation;
    NSMutableArray *_pointsCurrentStroke;
    BOOL _duringStroke;
}

@property (readonly, nonatomic) BOOL autoConfirmationEnabled;
@property (readonly, nonatomic) double minTimeout;
@property (readonly, nonatomic) double maxTimeout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } handwritingFrame;

- (void)updatePreferences;
- (void)endStroke;
- (double)timeoutForNextPage;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (double)smoothValueFromArray:(id)a0;
- (double)speedForCurrentStroke;
- (void).cxx_destruct;
- (id)init;
- (void)beginStroke;
- (void)endCharacter;

@end
