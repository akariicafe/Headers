@class NSString;

@interface VNFaceprintGenerator : VNDetector {
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> { struct FaceFrontalizer *__ptr_; struct __shared_weak_count *__cntrl_; } m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> { struct ImageDescriptorAugmenterFlip *__ptr_; struct __shared_weak_count *__cntrl_; } m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } m_FaceFrontalizerImageBuffer;
    unsigned long long _metalContextPriority;
}

@property (class, readonly, nonatomic) NSString *modelPath;
@property (class, readonly, nonatomic) int clusteringConfidence;
@property (class, readonly, nonatomic) unsigned long long numberOfChannels;
@property (class, readonly, nonatomic) unsigned int pixelFormat;
@property (class, readonly, nonatomic) float magnifiedBBoxScaleFactor;

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL useLowPriorityMode;
@property (readonly, nonatomic) unsigned long long metalContextPriority;

+ (BOOL)shouldDumpDebugIntermediates;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (void /* function */ *)faceDescriptorCreator;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundingBox:(id)a0;
+ (void /* function */ *)getFaceJunkClassifier;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void)printDebugInfoFor:(struct __CVBuffer { } *)a0 imageBuffer:(id)a1 originalImageLumaCrop:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2 faceBBoxInLumaCropCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 magnifiedBBoxInLumaCropCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a4;

@end
