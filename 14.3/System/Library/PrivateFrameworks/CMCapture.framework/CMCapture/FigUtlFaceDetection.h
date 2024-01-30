@class NSArray, FigUtlROIProcessor, VNImageRequestHandler;

@interface FigUtlFaceDetection : NSObject {
    VNImageRequestHandler *_requestHandler;
    NSArray *_faces;
    unsigned int _pixelFormat;
    float _landmarksModelFraction;
}

@property (readonly, nonatomic) FigUtlROIProcessor *roi;
@property (readonly) BOOL isBlinking;
@property (readonly) float blink;
@property (readonly) int landmarkCount;

+ (id)createFaceLandmarksRequest:(float)a0;
+ (BOOL)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)a0;
+ (void)deallocateResources;

- (void)end;
- (void).cxx_destruct;
- (BOOL)computeLandmarks;
- (id)initWithMaxImageWidth:(int)a0 height:(int)a1 pixelFormat:(unsigned int)a2 landmarksModelFraction:(float)a3;
- (BOOL)computeQuality:(struct __CVBuffer { } *)a0 orientation:(int)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 quality:(float *)a3 alignedRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (BOOL)start;
- (struct CGPoint { double x0; double x1; })landmark:(int)a0;

@end
