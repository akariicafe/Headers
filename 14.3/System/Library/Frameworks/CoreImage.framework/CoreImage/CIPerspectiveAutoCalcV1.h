@class CIImage;

@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc {
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
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } vLineCluster;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> > { struct *__begin_; struct *__end_; struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line> > { struct *__value_; } __end_cap_; } hLineCluster;
    BOOL vGuidesValid;
    BOOL hGuidesValid;
    float vGuidesAOE;
    float hGuidesAOE;
    struct { void /* unknown type, empty encoding */ a; void /* unknown type, empty encoding */ b; } vGuide0;
    struct { void /* unknown type, empty encoding */ a; void /* unknown type, empty encoding */ b; } vGuide1;
    struct { void /* unknown type, empty encoding */ a; void /* unknown type, empty encoding */ b; } hGuide0;
    struct { void /* unknown type, empty encoding */ a; void /* unknown type, empty encoding */ b; } hGuide1;
    struct PseudoRand { unsigned int u; unsigned int v; } pseudoRando;
    float rX;
    float rY;
    float rZ;
}

@property double minimumPitchCorrectionAreaCoverage;
@property double minimumYawCorrectionAreaCoverage;
@property (readonly) float pitchCorrectionAreaCoverage;
@property (readonly) float yawCorrectionAreaCoverage;

- (double)confidence;
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
- (void)rangeLimitGradientMap;
- (void)computeTransform;
- (void)computeGuides;
- (id).cxx_construct;

@end
