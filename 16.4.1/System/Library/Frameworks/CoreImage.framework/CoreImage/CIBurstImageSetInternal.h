@class NSString, NSMutableDictionary, NSDictionary, NSCountedSet, NSObject, NSMutableArray, CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CIBurstImageSetInternal : NSObject {
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    BOOL isAction;
    BOOL isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *burstLogFileHandle;
    int curClusterIndexToProcess;
}

@property NSMutableArray *clusterArray;
@property int temporalOrder;
@property NSCountedSet *faceIDCounts;
@property NSMutableArray *allImageIdentifiers;
@property NSMutableDictionary *statsByImageIdentifier;
@property NSMutableDictionary *clusterByImageIdentifier;
@property NSString *burstLogFileName;
@property CIBurstActionClassifier *actionClassifier;
@property int maxNumPendingFrames;
@property BOOL enableAnalysis;
@property int dummyAnalysisCount;
@property BOOL enableFaceCore;
@property BOOL enableDumpYUV;
@property NSString *burstCoverSelection;
@property (retain, nonatomic) NSString *burstId;
@property NSMutableArray *bestImageIdentifiersArray;
@property NSString *versionString;
@property int version;

+ (id)defaultVersionString;

- (BOOL)isPortrait;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (float)computeActionSelectionThreshold;
- (int)computeEmotion:(id)a0;
- (void)addImageFromIOSurface:(struct __IOSurface { } *)a0 properties:(id)a1 identifier:(id)a2 completionBlock:(id /* block */)a3;
- (void)addYUVImage:(id)a0 properties:(id)a1 identifier:(id)a2 imageProps:(id)a3 completionBlock:(id /* block */)a4;
- (id)bestImageIdentifiers;
- (id)burstDocumentDirectory;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (id)findBestImage:(id)a0 useActionScores:(BOOL)a1;
- (id)imageClusterForIdentifier:(id)a0;
- (BOOL)isAction;
- (BOOL)isFaceDetectionForced;
- (void)performEmotionalRejectionOnCluster:(id)a0;
- (void)processClusters:(BOOL)a0;
- (void)selectCoverPhotoFromMultiple:(id)a0 burstSize:(int)a1;

@end
