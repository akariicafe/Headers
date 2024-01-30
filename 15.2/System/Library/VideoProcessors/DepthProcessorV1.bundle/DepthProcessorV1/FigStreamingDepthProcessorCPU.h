@class NSArray, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FigStreamingDepthProcessorCPU : NSObject <DepthProcessor> {
    struct SDPGuidedDepthReconstruction { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3; BOOL x4; float x5; float x6; float x7; float x8; float x9; float x10; BOOL x11; float x12; float x13; float x14; float x15; float x16; BOOL x17; float *x18; BOOL x19; BOOL x20; BOOL x21; float x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; struct SDPDepthInpaint *x27; struct SDPTemporalFilter *x28; struct SparseMap *x29; struct FMGsolver *x30; float *x31; float *x32; float *x33; float *x34; float *x35; float *x36; float *x37; BOOL x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned long long x45; unsigned long long x46; unsigned long long x47; unsigned long long x48; unsigned long long x49; unsigned long long x50; } *_gdr;
    int _resX;
    int _resY;
    BOOL _resourcesAllocated;
    BOOL _isFrontFacing;
    float *_image;
    float *_disparity;
}

@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) NSArray *faceLandmarksArray;
@property (readonly, nonatomic) float disparityQualityScore;
@property (readonly, nonatomic) BOOL disparityQualityIsHigh;
@property (readonly, nonatomic) int figDepthQuality;
@property (nonatomic) BOOL streamingGDRFilterEnabled;
@property (nonatomic) BOOL streamingSMPFilterEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseResources;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)allocateResources;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 parametersDictionary:(id)a2 outputDisparityBuffer:(struct __CVBuffer { } *)a3;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 personSegmentationMaskBuffer:(struct __CVBuffer { } *)a2 instanceSegmentationMaskBufferArray:(id)a3 instanceSegmentationConfidences:(id)a4 parametersDictionary:(id)a5 outputDisparityBuffer:(struct __CVBuffer { } *)a6;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 rgbSegmentationMaskBuffer:(struct __CVBuffer { } *)a2 parametersDictionary:(id)a3 outputDisparityBuffer:(struct __CVBuffer { } *)a4;
- (id)initWithParameters:(struct depthProcessorParameters { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 commandQueue:(id)a1;
- (void)_convertInputYUV:(struct __CVBuffer { } *)a0;
- (void)_convertInputShifts:(struct __CVBuffer { } *)a0;
- (void)_copyToDepthImage:(struct __CVBuffer { } *)a0;

@end
