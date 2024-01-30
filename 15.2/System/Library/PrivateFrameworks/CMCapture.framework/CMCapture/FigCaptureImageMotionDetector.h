@interface FigCaptureImageMotionDetector : NSObject {
    int _width;
    int _height;
    int *_intRowSum;
    int *_intColSum;
    struct { double **rowSums; double **colSums; unsigned int curIdx; unsigned int count; unsigned int size; } _imgProj;
    double *_tmpSum1;
    double *_tmpSum2;
    double *_corrArray;
    int _rowSumLength;
    int _rowSumCapacity;
    int _colSumLength;
    int _colSumCapacity;
    int _processedBufferCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sumROI;
}

@property (readonly, nonatomic) struct { float crossCorrelationMaximum[2]; int maxCorrelationShift[2]; int frameRingBufferCount; int frameRingBufferDistance; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } roi; BOOL isMotionDetected; BOOL valid; } motionStatistics;
@property (nonatomic) float stationaryThreshold;
@property (readonly, nonatomic) int maximumSearchRange;

- (int)_computeStatistics;
- (id)init;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (void)dealloc;
- (int)setRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actualROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (int)setCentralROIAndGetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)resetProcessingState;
- (id)initWithWidth:(int)a0 height:(int)a1 maximumSearchRange:(int)a2 frameRingSize:(int)a3;
- (int)_allocateArrays:(int)a0 height:(int)a1 frameRingSize:(int)a2;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 metadataDictionary:(id)a1;
- (void)_freeAllocatedArrays;

@end
