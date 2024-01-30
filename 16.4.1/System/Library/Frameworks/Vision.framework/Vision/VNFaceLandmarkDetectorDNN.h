@class NSArray;

@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> { struct LandmarkDetectorDNN *__ptr_; struct __shared_weak_count *__cntrl_; } _landmarkDetector;
    struct vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ *__begin_; struct _Geometry2D_point2D_ *__end_; struct __compressed_pair<_Geometry2D_point2D_ *, std::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ *__value_; } __end_cap_; } _landmarkPoints65;
}

@property (class, readonly, nonatomic) NSArray *inputBlobNames;
@property (class, readonly, nonatomic) NSArray *outputBlobNames;
@property (class, readonly, nonatomic) unsigned char landmarkDetectorDNNVersion;

@property (readonly) void *landmarkPoints65;

+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (const void *)_requestConstellationToDetectorConstellationMap;

- (void)releaseResources;
- (id).cxx_construct;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (void).cxx_destruct;
- (BOOL)getConstellation:(unsigned long long *)a0 cvmlConstellation:(int *)a1 fromOptions:(id)a2 error:(id *)a3;
- (BOOL)getLandmarkErrorEstimates:(void *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)getLandmarkOcclusionFlags:(void *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)getLandmarkPoints:(void *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(void *)a0 imageBuffer:(id)a1 outputFace:(id)a2 error:(id *)a3;

@end
