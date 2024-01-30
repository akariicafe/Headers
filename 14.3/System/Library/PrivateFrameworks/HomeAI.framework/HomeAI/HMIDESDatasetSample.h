@class NSData, NSArray;

@interface HMIDESDatasetSample : HMFObject {
    float *_boxesTensorData;
    float *_weightsTensorData;
    float *_classesTensorData;
}

@property (readonly) NSData *imageData;
@property (readonly) NSArray *detections;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;

+ (void)saveDESRecordWithVideoFrame:(id)a0 recordInfo:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImageData:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 detections:(id)a2;
- (id)augmentWithOptions:(id)a0;
- (struct __CVBuffer { } *)createRegionOfInterestPixelBufferWithError:(id *)a0;
- (id)createImageTensorWithError:(id *)a0;
- (id)createBoxesTensorWithError:(id *)a0;
- (id)createClassesTensorWithError:(id *)a0;
- (id)createWeightsTensorWithError:(id *)a0;

@end
