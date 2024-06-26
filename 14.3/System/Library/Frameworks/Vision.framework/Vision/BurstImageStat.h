@class NSString, NSMutableArray;

@interface BurstImageStat : NSObject {
    float normalizedFocusScore;
    float normalizedSigma;
    float colorHistogram[1024];
    int numEntries;
    unsigned short aeMatrix[256];
    int dissimilarity;
    struct FastRegistration_Signatures { float *piRow; unsigned long long nPiRow; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piRowTable; float *piCol; unsigned long long nPiCol; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piColTable; char *_memoryContainer; } projectionSignature;
    struct SharpnessGridElement_t { unsigned char x0; unsigned char x1; float x2; } *sharpnessGrid;
    int gridWidth;
    int gridHeight;
    struct GridROI_t { int startX; int startY; int endX; int endY; } gridROI;
    struct GridROI_t { int startX; int startY; int endX; int endY; } smoothedROI;
}

@property (retain) NSString *imageId;
@property int orientation;
@property (retain) NSMutableArray *faceStatArray;
@property BOOL exclude;
@property BOOL AEStable;
@property int AEAverage;
@property int AETarget;
@property BOOL AFStable;
@property int temporalOrder;
@property float avgHorzDiffY;
@property float blurExtent;
@property float imageScore;
@property float actionScore;
@property double timeReceived;
@property double timestamp;
@property float maxSkewness;
@property float registrationErrorX;
@property float registrationErrorY;
@property float registrationErrorIntegral;
@property float actionClusteringScore;
@property BOOL hasRegistrationData;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } facesRoiRect;
@property int numHWFaces;
@property BOOL emotionallyRejected;
@property BOOL doLimitedSharpnessAndBlur;
@property float tx;
@property float ty;
@property BOOL isGarbage;
@property float roiSize;
@property int AEDelta;
@property int version;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (unsigned short *)aeMatrix;
- (void)computeImageData:(struct __CVBuffer { } *)a0 faceIDCounts:(id)a1;
- (int)canRegister;
- (float)computeAEMatrixDifference:(id)a0;
- (void)allocateMeanStdPingPongBuffers:(float **)a0 :(float **)a1 :(float **)a2 :(float **)a3;
- (void)assignMeanStdBuffers:(float *)a0;
- (void)performRegistration:(id)a0 deltaCol:(float *)a1 deltaRow:(float *)a2;
- (float)computeSmoothedGridROI:(id)a0 nextStat:(id)a1;
- (void)collapseSharpnessGrid;
- (void)flagAsGarbage;
- (float)computeScore:(float)a0;
- (void)writeGridROI:(id)a0;
- (float)computeImageDistance:(id)a0;
- (long long)compareImageOrder:(id)a0;
- (struct GridROI_t { int x0; int x1; int x2; int x3; })getSharpnessAndBlurLimits;
- (void)updateROI:(struct GridROI_t { int x0; int x1; int x2; int x3; })a0;
- (void)computeImageColorHistogram:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)computeImageSharpnessOnGrid:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (int)setAEMatrix:(id)a0;
- (void)computeBlurStatsOnGrid:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)computeImageProjections:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (float)computeFacialFocusScoreSum;
- (float)computeRuleOfThreeDistance;
- (float)computeSmilePercentage;
- (void)computeAEMatrix:(struct __CVBuffer { } *)a0;
- (long long)compareImageStats:(id)a0;
- (float *)colorHistogram;

@end
