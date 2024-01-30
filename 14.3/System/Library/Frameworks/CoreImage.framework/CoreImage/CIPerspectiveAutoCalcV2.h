@class CIImage;

@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc {
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } K;
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } invK;
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } T;
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } invT;
    CIImage *gradMap;
    unsigned long long gradMapW;
    unsigned long long gradMapH;
    void *gradMapBmp;
    unsigned long long gradMapRb;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } vLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } hLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } vClusterInliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } hClusterInliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } vClusterOutliers;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } hClusterOutliers;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__begin_; struct LineCostProxy *__end_; struct __compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__value_; } __end_cap_; } vClusterInliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__begin_; struct LineCostProxy *__end_; struct __compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__value_; } __end_cap_; } hClusterInliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__begin_; struct LineCostProxy *__end_; struct __compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__value_; } __end_cap_; } vClusterOutliersProxies;
    struct vector<LineCostProxy, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__begin_; struct LineCostProxy *__end_; struct __compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy> > { struct LineCostProxy *__value_; } __end_cap_; } hClusterOutliersProxies;
    void /* unknown type, empty encoding */ initialSimplexVerticesXYZ[64];
    void /* unknown type, empty encoding */ initialSimplexVerticesXZ[16];
    void /* unknown type, empty encoding */ initialSimplexVerticesYZ[16];
    int solutionType;
    struct Solution { float rX; float rY; float rZ; float cost; } solution;
}

@property (readonly) double unlimitedPitch;
@property (readonly) double unlimitedYaw;
@property (readonly) double unlimitedRoll;

- (BOOL)compute;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)a0 image:(id)a1 config:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; id x6; } *)a2;
- (void)standardizeImage;
- (void)createGradientMap;
- (void)normalizeGradientMap;
- (void)thresholdGradientMap;
- (void)extractLineSegments;
- (void)clusterLineSegments;
- (void)setupCostFunction;
- (void)runOptimization;
- (void)computeConfidence;
- (float)evaluateCost:(SEL)a0;
- (float)evaluateCostXZ:(SEL)a0;
- (float)evaluateCostYZ:(SEL)a0;
- (id).cxx_construct;

@end
