@class NSArray, NSMutableArray;
@protocol RedEyeInspector3;

@interface CIRedEyeRepair3 : NSObject {
    id<RedEyeInspector3> inspector;
    struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } fullBitmap;
    struct { int minrow; int maxrow; int mincol; int maxcol; } subRectangle;
    struct { struct { int minrow; int maxrow; int mincol; int maxcol; } FR; struct CGPoint { double x; double y; } leftEye; struct CGPoint { double x; double y; } rightEye; struct { int minrow; int maxrow; int mincol; int maxcol; } LR; struct { int minrow; int maxrow; int mincol; int maxcol; } RR; float leftDistMatrix[4]; float rightDistMatrix[4]; struct CGPoint { double x; double y; } LPoly[8]; struct CGPoint { double x; double y; } RPoly[8]; float IOD; } FC;
    NSArray *faceArray;
    struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } faceBitmap;
    struct { float xf; float yf; float xfi; float yfi; float ify; int ioffx; int ioffy; int downsampleType; float downsampleOversizeX; float downsampleOversizeY; int gradientChannel; int edgeFindingChannel; float minMagnitude; float regressionRadius; float capture; float alignmentTolerance; float connectThreshold; BOOL forceFail; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputImageExtent; int orientation; int cameraType; int faceIndex; int side; float scale; float IOD; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; int height; } S;
    struct { int width; int height; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } T; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } Tp; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } O; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } OO; BOOL computeEyePolygon; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } EP; BOOL maskRender; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } D; BOOL computeGradient; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } G; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } M; BOOL computeShine; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } S; struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } P; } PB;
    struct { int width; int height; float scaleFactor; struct *grid; int nPoints; int maxPoints; struct *points; int nextNetNumber; int nThreads; int maxThreads; struct *threads; int nShapes; int maxShapes; struct *shapes; } G;
    struct { float skinval; float avgLuminance; float minLuminance; float maxLuminance; float darkPercent; float clipPercent; } M;
    struct { double variance; int nNonZero; } FS;
    int printFaceArrayLevel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ROIRect;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float skinval;
    int ioffx;
    int ioffy;
    int erError;
    NSMutableArray *repairs;
    struct { int minrow; int maxrow; int mincol; int maxcol; } repairRect;
    struct { char *baseAddress; int width; int height; int rowSamples; int rowBytes; int size; int samplesPerPixel; int bytesPerSample; float resolution; } repairMap;
    NSMutableArray *failureCauses;
}

+ (void)insertIntoThreadHopper:(struct { int x0; struct { int x0; float x1; float x2; float x3; float x4; float x5; float x6; } x1[20]; } *)a0 index:(int)a1 recChannel:(float)a2 hue:(float)a3 saturation:(float)a4 luminance:(float)a5 shapeMetricTotal:(float)a6 xPosition:(float)a7;
+ (void)insertIntoConnectionHopper:(struct { int x0; struct { int x0; int x1; int x2; int x3; float x4; } x1[20]; } *)a0 index1:(int)a1 drop1:(int)a2 index2:(int)a3 drop2:(int)a4 score:(float)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })supportRectangleWithFaceArray:(id)a0 options:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })supportRectangleWithRepair:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (float)yawAngleWithFaceDictionary:(id)a0;
+ (int)bitmapRect:(struct { int x0; int x1; int x2; int x3; } *)a0 point:(struct CGPoint { double x0; double x1; } *)a1 polygon:(struct CGPoint { double x0; double x1; }[8])a2 andDistMatrix:(float[4])a3 forEye:(int)a4 inFaceDictionary:(id)a5 settings:(struct { float x0; float x1; float x2; float x3; float x4; int x5; int x6; int x7; float x8; float x9; int x10; int x11; float x12; float x13; float x14; float x15; float x16; BOOL x17; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x18; int x19; int x20; int x21; int x22; float x23; float x24; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x25; int x26; } *)a6;
+ (int)faceContext:(struct { struct { int x0; int x1; int x2; int x3; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct { int x0; int x1; int x2; int x3; } x3; struct { int x0; int x1; int x2; int x3; } x4; float x5[4]; float x6[4]; struct CGPoint { double x0; double x1; } x7[8]; struct CGPoint { double x0; double x1; } x8[8]; float x9; } *)a0 withFaceArray:(id)a1 index:(int)a2 settings:(struct { float x0; float x1; float x2; float x3; float x4; int x5; int x6; int x7; float x8; float x9; int x10; int x11; float x12; float x13; float x14; float x15; float x16; BOOL x17; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x18; int x19; int x20; int x21; int x22; float x23; float x24; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x25; int x26; } *)a3;
+ (struct { float x0; float x1; float x2; float x3; float x4; int x5; int x6; int x7; float x8; float x9; int x10; int x11; float x12; float x13; float x14; float x15; float x16; BOOL x17; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x18; int x19; int x20; int x21; int x22; float x23; float x24; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x25; int x26; })settingsWithOptions:(id)a0;
+ (struct { int x0; int x1; int x2; int x3; })bitmapRectWithImageSubRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(struct { float x0; float x1; float x2; float x3; float x4; int x5; int x6; int x7; float x8; float x9; int x10; int x11; float x12; float x13; float x14; float x15; float x16; BOOL x17; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x18; int x19; int x20; int x21; int x22; float x23; float x24; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x25; int x26; } *)a1;

- (void)termGrid;
- (int)newThread:(struct **)a0;
- (void)initBitmaps;
- (void)termShapePoints:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0;
- (void)point:(struct CGPoint { double x0; double x1; })a0 toGridRow:(int *)a1 column:(int *)a2;
- (void)removeThreadAtIndex:(int)a0;
- (int)gatherThreadInfo:(struct { int x0; int x1; int x2; float x3; float x4; int x5; BOOL x6; BOOL x7; BOOL x8; int x9; int x10; float x11; float x12; float x13; float x14; struct { float x0; float x1; float x2; float x3; } x15; struct { float x0; float x1; float x2; float x3; } x16; float x17; int x18; int x19; } *)a0;
- (int)lookForPoint:(struct CGPoint { double x0; double x1; } *)a0 onLine:(struct { float x0; float x1; float x2; })a1 nearestPoint:(struct CGPoint { double x0; double x1; })a2;
- (int)initHull:(struct **)a0 withOrientation:(BOOL)a1;
- (void)termBitmaps;
- (void)forAllGridPointsNear:(int)a0 withinRadius:(float)a1 do:(void /* function */ *)a2 context:(void *)a3;
- (int)addPoint:(struct CGPoint { double x0; double x1; })a0 toHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1;
- (BOOL)trimConcaveFromHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (BOOL)trimEndPointFromHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (BOOL)trimStartPointFromHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (int)renderHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0 toBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a1;
- (void)printThreadWithIndex:(int)a0;
- (void)putThreadAtIndex:(int)a0;
- (void)printThreadsOnlyClosed:(BOOL)a0 message:(char *)a1;
- (void)forAllGridThreadsNear:(struct CGPoint { double x0; double x1; })a0 withinRadius:(float)a1 do:(void /* function */ *)a2 context:(void *)a3;
- (void)printConnectionHopper:(struct { int x0; struct { int x0; int x1; int x2; int x3; float x4; } x1[20]; } *)a0 message:(char *)a1;
- (int)connectThreads:(int)a0 drop1:(int)a1 and:(int)a2 drop2:(int)a3;
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0;
- (int)initShapePoints:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0 withMaxPoints:(int)a1;
- (int)addPoint:(struct CGPoint { double x0; double x1; })a0 toShapePoints:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a1;
- (void)removeRedundantPointsFromShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0 closerThan:(float)a1;
- (int)updatedCheckpoint:(struct CGPoint { double x0; double x1; } *)a0 withCheckpoint:(struct CGPoint { double x0; double x1; })a1 checkpointIndex:(int)a2 angle:(float)a3 width:(int)a4 height:(int)a5 inChannel:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a6 threadIndex:(int)a7 returningEdgeWidth:(float *)a8;
- (int)newShape:(struct **)a0 byInterpolatingBetweenCheckpoints:(struct { struct CGPoint { double x0; double x1; } x0; int x1; float x2; }[100])a1 nc:(int)a2 usingVectorField:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a3;
- (void)removeSmallBumpsFromShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0 center:(struct CGPoint { double x0; double x1; })a1 threshold:(float)a2;
- (void)removeSpikesFromShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0;
- (int)improvedShape:(struct **)a0 withShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a1;
- (int)insertPoint:(struct CGPoint { double x0; double x1; })a0 andDirection:(struct CGPoint { double x0; double x1; })a1 intoGrid:(BOOL)a2;
- (int)attemptClosureOfThreadIndex:(int)a0;
- (int)closeThreadIndex:(int)a0 usingVectorField:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a1;
- (struct CGPoint { double x0; double x1; })threadCentroid:(struct { int x0; int x1; int x2; float x3; float x4; int x5; BOOL x6; BOOL x7; BOOL x8; int x9; int x10; float x11; float x12; float x13; float x14; struct { float x0; float x1; float x2; float x3; } x15; struct { float x0; float x1; float x2; float x3; } x16; float x17; int x18; int x19; } *)a0;
- (float)threadSignedArea:(struct { int x0; int x1; int x2; float x3; float x4; int x5; BOOL x6; BOOL x7; BOOL x8; int x9; int x10; float x11; float x12; float x13; float x14; struct { float x0; float x1; float x2; float x3; } x15; struct { float x0; float x1; float x2; float x3; } x16; float x17; int x18; int x19; } *)a0 centroid:(struct CGPoint { double x0; double x1; })a1;
- (int)shape:(struct **)a0 withThreadAtIndex:(int)a1 centroid:(struct CGPoint { double x0; double x1; })a2;
- (void)slidingWindowAnalysisOfShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0 into:(struct { float x0[4]; float x1[4]; float x2[4]; int x3[4]; } *)a1;
- (int)copyShape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a0 into:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 height:(int)a3;
- (int)convexHull:(struct **)a0 ofOriented:(BOOL)a1 shape:(struct { int x0; int x1; struct *x2; int x3; int x4; int x5; } *)a2;
- (void)measureHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0 majorAxis:(struct CGPoint { double x0; double x1; } *)a1 majorTo:(struct CGPoint { double x0; double x1; } *)a2 majorDiameter:(float *)a3 minorAxis:(struct CGPoint { double x0; double x1; } *)a4 minorTo:(struct CGPoint { double x0; double x1; } *)a5 minorDiameter:(float *)a6;
- (int)color:(struct { float x0; float x1; float x2; float x3; } *)a0 underConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1 saturated:(struct { float x0; float x1; float x2; float x3; } *)a2;
- (BOOL)hopperElement:(struct { int x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a0 isMoreScleraThanElement:(struct { int x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a1;
- (void)swapHopperElement:(struct { int x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a0 withElement:(struct { int x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a1;
- (BOOL)initGridWithBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0 scale:(int)a1;
- (BOOL)edgePoint:(struct CGPoint { double x0; double x1; } *)a0 withBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a1 center:(struct CGPoint { double x0; double x1; })a2 perp:(struct CGPoint { double x0; double x1; })a3;
- (void)regressionWithPointIndex:(int)a0;
- (int)findThreadsInGrid;
- (int)replacePointAndDirection:(int)a0;
- (int)nextPointIndexWithPointIndex:(int)a0;
- (int)linkUpPointIndex:(int)a0 toPointIndex:(int)a1;
- (int)connectThreadsInGrid;
- (int)recognizeThreadsWinningThreadIndex:(int *)a0 info:(struct { float x0; float x1; float x2; float x3; } *)a1;
- (int)copyGridInto:(struct { int x0; int x1; float x2; struct *x3; int x4; int x5; struct *x6; int x7; int x8; int x9; struct *x10; int x11; int x12; struct *x13; } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 height:(int)a2;
- (int)convexHull:(struct **)a0 ofOriented:(BOOL)a1 threadIndex:(int)a2;
- (void)condenseFourChannelRecognitionMap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0 intoOneChanneMap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a1;
- (double)next12BitRandom;
- (void)magnitudeMap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0 fromGabor:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a1;
- (int)renderEyePolygonToBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0;
- (int)analyzeMask:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0 usingConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1 producingOptimizedMask:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a2;
- (int)widenedHull:(struct **)a0 withHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1 by:(float)a2;
- (int)renderConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0 distance:(float)a1 fieldToBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a2;
- (void)start12BitRandom:(int)a0;
- (int)prepareBitmapsWithString:(char *)a0;
- (int)prepareTransformWithEyeIndex:(int)a0;
- (int)prominenceConvexHull:(struct **)a0 facts:(struct { struct { float x0; float x1; float x2; float x3; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a1;
- (int)prepareMasksWithConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (struct { double x0; int x1; })focusStatsWithBitmap:(struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)a0 IOD:(float)a1;
- (BOOL)isBlurryWithFocusStats:(struct { double x0; int x1; })a0;
- (id)repairArray;
- (void)autoRepairWithFaceArray:(id)a0;
- (id)initWithExternalBuffer:(char *)a0 subRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rowBytes:(unsigned long long)a2 options:(id)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inverseImageTransformForOrientation:(int)a0;
- (struct { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; } *)repairMap;
- (void)termHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (BOOL)isConvex:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (int)newShape:(struct **)a0;
- (struct { float x0; float x1; float x2; float x3; })RGBtoHSV:(struct { float x0; float x1; float x2; float x3; })a0;
- (void)executeRepair:(id)a0;
- (void)printFaceArray;
- (void)repairExternalBuffer;
- (void)setInspector:(id)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })centroidWithConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0;
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)stringWithRER3Error:(int)a0;
- (id)dictionaryRectArrayWithGlobalBitmapRect:(struct { int x0; int x1; int x2; int x3; })a0;
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gatherFaceStatistics:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (id)dictionaryRectArrayWithBitmapRect:(struct { int x0; int x1; int x2; int x3; })a0;
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint { double x0; double x1; })a0;
- (int)repairDictionary:(id *)a0 withEyeIndex:(int)a1;
- (struct { int x0; int x1; int x2; int x3; })globalBitmapRectWithDictionaryRectArray:(id)a0;
- (struct CGPoint { double x0; double x1; })globalBitmapPointWithDictionaryPointArray:(id)a0;
- (BOOL)unpackToGlobalRepairDictionary:(id)a0 convexHull:(struct **)a1 facts:(struct { struct { float x0; float x1; float x2; float x3; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a2;
- (int)updateWithFaceIndex:(int)a0;
- (int)transformRepairArray:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGPoint { double x0; double x1; })leftHandedTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 ofPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)mutableCopyOfArray:(id)a0;
- (void)transformGlobalsWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)transformConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (int)executeRepairWithRepairDictionary:(id)a0;
- (struct { int x0; int x1; int x2; int x3; })repairRect;
- (int)packGlobalRepairDictionary:(id *)a0 withConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1 facts:(struct { struct { float x0; float x1; float x2; float x3; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a2;
- (struct CGPoint { double x0; double x1; })bitmapPointWithDictionaryPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)repairWithSide:(int)a0;
- (struct CGPoint { double x0; double x1; })globalBitmapPointWithDictionaryPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })bitmapPointWithDictionaryPointArray:(id)a0;
- (struct CGPoint { double x0; double x1; })dictionaryPointWithBitmapPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })dictionaryPointWithGlobalBitmapPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { int x0; int x1; int x2; int x3; })bitmapRectWithDictionaryRectArray:(id)a0;
- (BOOL)openRepairDictionary:(id)a0 convexHull:(struct **)a1 facts:(struct { struct { float x0; float x1; float x2; float x3; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a2;
- (int)saveRepairDictionary:(id *)a0 withConvexHull:(struct { BOOL x0; int x1; int x2; struct CGPoint *x3; } *)a1 facts:(struct { struct { float x0; float x1; float x2; float x3; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a2;

@end
