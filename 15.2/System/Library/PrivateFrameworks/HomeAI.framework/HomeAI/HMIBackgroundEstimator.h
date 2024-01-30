@class NSSet, NSString, NSMutableSet, NSMutableArray, HMIVideoAnalyzerConfiguration;

@interface HMIBackgroundEstimator : HMFObject <HMFLogging>

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) NSMutableSet *tracks;
@property (readonly) NSMutableSet *foregroundEvents;
@property (readonly) NSMutableArray *backgroundEvents;
@property (readonly) unsigned long long minSampleSize;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundExpireInterval;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeInterval;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeResetInterval;
@property unsigned short *assignment;
@property float *runningMean;
@property float *runningStd;
@property unsigned long long numImages;
@property struct CGSize { double width; double height; } imageSize;
@property struct CGSize { double width; double height; } modelSize;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } foregroundTimeStamp;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundTimeStamp;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundChangeTimeStamp;
@property BOOL adjustBrightness;
@property (readonly) NSMutableArray *motionDetections;
@property (readonly) NSMutableArray *motionTimeStamps;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } motionValidInterval;
@property (readonly) BOOL hasNewBackground;
@property (readonly) NSSet *packageEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (struct __CVBuffer { } *)resizePixelBuffer:(struct __CVBuffer { } *)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (BOOL)_invalidateBackgroundForPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_ensureInternalBuffersForPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)_predictForegroundFromPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_updateBackgroundFromPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_setAssignment:(unsigned short *)a0 greaterThanType:(unsigned short)a1 value:(unsigned short)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scale:(float)a4;
- (float)_intersectionOverUnionFromBlob:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 assignment:(unsigned short *)a2;
- (id)_stationaryTracks:(id)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_expireMotionDetectionsAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_copyFromPixelBuffer:(struct __CVBuffer { } *)a0 toInputBuffer:(float *)a1 translateCol:(int)a2 translateRow:(int)a3;
- (void)_updateRunningMean:(float *)a0 runningSquaredMean:(float *)a1 fromInputBuffer:(const float *)a2 decay:(float)a3;
- (void)_updateRunningStd:(float *)a0 withAuxBuffer:(float *)a1 runningMean:(const float *)a2 runningSquaredMean:(const float *)a3;
- (void)_foregroundPixelsFromPixelBuffer:(struct __CVBuffer { } *)a0 attribute:(char *)a1 assignment:(unsigned short *)a2;
- (id)_blobsFromAssignment:(unsigned short *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_foregroundBlobsFromBlobs:(id)a0 backgroundChanged:(BOOL *)a1;
- (void)_correctRunningMeanBrightnessAtAttribute:(const char *)a0;
- (void)_updateCurrentTracks:(id)a0 blobs:(id)a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (struct __CVBuffer { } *)_exportBackgroundMean;
- (struct __CVBuffer { } *)_exportBackgroundStd;
- (struct __CVBuffer { } *)_exportForegroundDiffForPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)_exportForegroundAssignment;
- (struct __CVBuffer { } *)_exportInternalStateForPixelBuffer:(struct __CVBuffer { } *)a0 exportMode:(unsigned long long)a1;
- (void)_foregroundDifferencesFromPixelBuffer:(struct __CVBuffer { } *)a0 differences:(float *)a1;
- (void)_copyFromOutputBuffer:(const float *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)assignBackgroundFromEvents:(id)a0;
- (void)assignForegroundFromEvents:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pixelBuffer:(struct __CVBuffer { } *)a2 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)handleMotionDetection:(id)a0 inFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)exportInternalStateToReport:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 events:(id)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;

@end
