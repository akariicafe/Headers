@class NSMutableArray, NSArray, VCPCNNHandKeypointsDetector, VCPCNNHandsDetector, NSDate, VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject {
    float _prevComputedScore;
    int _rotationAngle;
    int _inputHeight;
    int _inputWidth;
    int _frameCounter;
    BOOL _handDetectedInPreviousFrame;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTImageRotationSession *x4; } *_rotator;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    VCPCNNFastGestureRecognition *_fastGestureDetector;
    NSArray *_prevFrameHandKeypoint;
    NSDate *_prevTimeStampHandDetected;
    NSDate *_prevTimeSignLanguageDetected;
    NSMutableArray *_classIndexTracker;
    NSMutableArray *_gestureScoreTracker;
    NSMutableArray *_motionScoreTracker;
    NSMutableArray *_iouTracker;
    NSMutableArray *_handKeypointTracker;
    struct CGPoint { double x; double y; } _prevHandCenter;
}

+ (id)priorityAnalysis;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (float)avgPooling:(id)a0;
- (float)computeIOU:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 boxB:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 handToFaceRatio:(float *)a2;
- (int)normalizeKeypoints:(struct CGPoint { double x0; double x1; } *)a0 handCenter:(struct CGPoint { double x0; double x1; } *)a1;
- (float)computeMaxMinDistance:(id)a0 prevFrameKeypoints:(id)a1;
- (float)minPooling:(id)a0;
- (float)maxPooling:(id)a0;
- (int)fastSignLanguageDetection:(float *)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withMetadata:(id)a2;
- (int)majorityVoting:(id)a0 numClass:(int)a1;
- (int)calculatePriorityScore:(float *)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withMetadata:(id)a2;

@end
