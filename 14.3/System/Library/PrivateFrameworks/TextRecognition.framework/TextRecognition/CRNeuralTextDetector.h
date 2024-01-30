@class CRPerformanceStatistics, NSMutableArray, CRDetectorConfiguration;

@interface CRNeuralTextDetector : NSObject

@property BOOL shouldCancel;
@property (retain, nonatomic) NSMutableArray *tileRects;
@property (retain) CRDetectorConfiguration *configuration;
@property (retain) CRPerformanceStatistics *detectorStats;
@property (retain) CRPerformanceStatistics *postProcStats;
@property (retain) CRPerformanceStatistics *inferenceStats;

+ (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)textFeaturesFromPolygons:(struct vector<CRDetectorUtils::CRTextDetectorQuadFeature, std::__1::allocator<CRDetectorUtils::CRTextDetectorQuadFeature> > { struct CRTextDetectorQuadFeature *x0; struct CRTextDetectorQuadFeature *x1; struct __compressed_pair<CRDetectorUtils::CRTextDetectorQuadFeature *, std::__1::allocator<CRDetectorUtils::CRTextDetectorQuadFeature> > { struct CRTextDetectorQuadFeature *x0; } x2; } *)a0 withScale:(const float *)a1;
+ (id)detectorForRevision:(unsigned long long)a0 imageReaderOptions:(id)a1 error:(id *)a2;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateTilesForImage:(id)a0 block:(id /* block */)a1;
- (id)detectInImage:(id)a0 error:(id *)a1;

@end
