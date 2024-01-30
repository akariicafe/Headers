@class NSDictionary, VCPRTLandmarkDetector, VCPFaceShapeModel, NSObject, VCPLandmarkValidator;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface VCPVideoFaceMeshAnalyzer : NSObject {
    int _faceCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _faceBounds;
    BOOL _inDetectionMode;
    VCPRTLandmarkDetector *_lmDetector;
    VCPRTLandmarkDetector *_lmTracker;
    float *_prevLM;
    float *_curLM;
    int _detectionModeCounter;
    int _trackingModeCounter;
    int _lostTrackCounter;
    BOOL _angleStable;
    float _validationScore;
    BOOL _validateFailedOnce;
    NSObject<OS_dispatch_queue> *_validationQueue;
    NSObject<OS_dispatch_group> *_validationGroup;
    struct __CVBuffer { } *_valBuffer;
    struct __CVBuffer { } *_valBufferRotated;
    float *_valAngle;
    float *_valLM;
    void *_meshVertices;
    VCPFaceShapeModel *_shapeModel;
    VCPLandmarkValidator *_faceValidator[5];
    float _eulerAngle[3];
    float _focalLengthInPixels;
    float _uc;
    float _vc;
    BOOL _offline;
    BOOL _initialized;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;
@property (readonly, nonatomic) const float *landmarks;
@property (readonly, nonatomic) BOOL bufferRotated;

- (int)setFrame:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isTracked;
- (BOOL)updateFocalLengthInPixels:(float)a0;
- (id)initWithFocalLengthInPixels:(float)a0 offline:(BOOL)a1 isFastMode:(BOOL)a2;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withRotation:(int)a2 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)makeValidationDecision;
- (void)updateIntrinsicWhenRotated;
- (int)checkResolutionChange:(struct __CVBuffer { } *)a0 withRotation:(int)a1;
- (int)validateFace:(struct __CVBuffer { } *)a0 eulerAngles:(float *)a1;
- (void)rotateLandmarks:(int)a0 width:(int)a1 height:(int)a2 landmarks:(float *)a3 numLandmarks:(int)a4;
- (void)mapToCameraNegativeZ;

@end
