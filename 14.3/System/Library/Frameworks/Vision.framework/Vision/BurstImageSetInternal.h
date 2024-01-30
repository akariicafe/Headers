@class VNImageBuffer, NSString, NSArray, NSMutableDictionary, NSDictionary, NSCountedSet, NSMutableArray, BurstActionClassifier, BurstImageFaceAnalysisContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BurstImageSetInternal : NSObject {
    NSObject<OS_dispatch_queue> *_burstAnalyzerDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_pendingFramesSemaphore;
    NSObject<OS_dispatch_queue> *_yuvdumpDispatchQueue;
    BOOL _isAction;
    BOOL _isPortrait;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_burstLogFileHandle;
    int _currentClusterIndexToProcess;
}

@property (copy, nonatomic) id /* block */ loggingCallback;
@property (retain) BurstImageFaceAnalysisContext *faceAnalysisContext;
@property (retain) VNImageBuffer *overrideImage;
@property (retain) NSDictionary *overrideProps;
@property (retain) NSMutableArray *clusterArray;
@property int temporalOrder;
@property (retain) NSCountedSet *faceIDCounts;
@property (retain) NSMutableArray *allImageIdentifiers;
@property (retain) NSMutableDictionary *statsByImageIdentifier;
@property (retain) NSMutableDictionary *clusterByImageIdentifier;
@property (retain) NSString *burstLogFileName;
@property (retain) BurstActionClassifier *actionClassifier;
@property int maxNumPendingFrames;
@property BOOL enableAnalysis;
@property int dummyAnalysisCount;
@property BOOL enableFaceCore;
@property BOOL enableDumpYUV;
@property (retain) NSString *burstCoverSelection;
@property (retain) NSString *burstId;
@property (retain) NSArray *bestImageIdentifiersArray;
@property (retain) NSString *versionString;
@property int version;

+ (id)defaultVersionString;

- (id)initWithOptions:(id)a0;
- (BOOL)isPortrait;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_reorientROIRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 orientation:(int)a2;
- (void)_reorientFaceRects:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 orientation:(int)a2;
- (id)allImageClusters;
- (void).cxx_destruct;
- (void)_addImageInternal:(id)a0 properties:(id)a1 identifier:(id)a2 imageProps:(id)a3 completionBlock:(id /* block */)a4;
- (void)addImage:(id)a0 properties:(id)a1 identifier:(id)a2 completionBlock:(id /* block */)a3;
- (void)dealloc;
- (BOOL)isAction;
- (double)secondsSinceStart;
- (id)bestImageIdentifiers;
- (BOOL)isFaceDetectionForced;
- (id)burstDocumentDirectory;
- (id)imageClusterForIdentifier:(id)a0;
- (void)processClusters:(BOOL)a0;
- (int)computeEmotion:(id)a0;
- (float)computeCameraTravelDistance;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (void)performEmotionalRejectionOnCluster:(id)a0;
- (id)findBestImage:(id)a0 useActionScores:(BOOL)a1;
- (void)selectCoverPhotoFromMultiple:(id)a0 burstSize:(int)a1;

@end
