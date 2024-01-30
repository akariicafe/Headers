@class NSArray;

@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> { struct LandmarkDetectorDNN *__ptr_; struct __shared_weak_count *__cntrl_; } _landmarkDetector;
    struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *__begin_; struct _Geometry2D_point2D_ *__end_; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *__value_; } __end_cap_; } _landmarkPoints65;
}

@property (class, readonly, nonatomic) NSArray *inputBlobNames;
@property (class, readonly, nonatomic) NSArray *outputBlobNames;
@property (class, readonly, nonatomic) unsigned char landmarkDetectorDNNVersion;

@property (readonly) struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; struct _Geometry2D_point2D_ *x1; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; } x2; } *landmarkPoints65;

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (const struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > > { struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> > { unsigned long long x0; } x2; } x0; } *)_requestConstellationToDetectorConstellationMap;

- (void).cxx_destruct;
- (void)releaseResources;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)getConstellation:(unsigned long long *)a0 cvmlConstellation:(int *)a1 fromOptions:(id)a2 error:(id *)a3;
- (BOOL)getLandmarkPoints:(struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; struct _Geometry2D_point2D_ *x1; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; } x2; } *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)getLandmarkErrorEstimates:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)getLandmarkOcclusionFlags:(struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } *)a0 forConstellation:(int)a1 error:(id *)a2;
- (BOOL)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; struct _Geometry2D_point2D_ *x1; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ *x0; } x2; } *)a0 imageBuffer:(id)a1 outputFace:(id)a2 error:(id *)a3;

@end
