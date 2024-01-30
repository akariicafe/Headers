@class CRDetectorConfiguration, CRPerformanceStatistics;

@interface CRNeuralTextDetector : NSObject

@property BOOL shouldCancel;
@property (retain) CRDetectorConfiguration *configuration;
@property (retain) CRPerformanceStatistics *detectorStats;
@property (retain) CRPerformanceStatistics *postProcStats;
@property (retain) CRPerformanceStatistics *inferenceStats;

+ (id)detectorForRevision:(unsigned long long)a0 imageReaderOptions:(id)a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })scaledImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)textFeaturesFromPolygons:(void *)a0 withScale:(const float *)a1;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)preheatWithError:(id *)a0;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)detectInImage:(id)a0 error:(id *)a1;
- (id)enumerateTilesForImage:(id)a0 block:(id /* block */)a1;

@end
