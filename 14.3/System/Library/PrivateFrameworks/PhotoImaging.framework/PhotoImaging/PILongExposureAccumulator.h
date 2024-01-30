@class NSDictionary, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_group, NURenderer, NUSurfaceStorage, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PILongExposureAccumulator : NSObject {
    struct { long long width; long long height; } _pixelSize;
    id<NURenderer> _renderer;
    id<NUSurfaceStorage> _temporaryDestinationStorage;
    id<NUSurfaceStorage> _averageAccumulationStorage;
    id<NUSurfaceStorage> _minimumAccumulationStorage;
    id<NUSurfaceStorage> _maximumAccumulationStorage;
    long long _frameCount;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_accumQueue;
    NSObject<OS_dispatch_semaphore> *_accumSemaphore;
    NSObject<OS_dispatch_semaphore> *_readySemaphore;
    NSObject<OS_dispatch_group> *_doneGroup;
    NSMutableArray *_inputFrames;
    BOOL _finished;
    NSDictionary *_imageOptions;
}

@property (retain) NSError *_accumError;
@property (readonly) BOOL isReadyForMoreData;

- (void)cancel;
- (void)_start;
- (BOOL)start:(out id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_markAsFinished;
- (id)workingColorSpace;
- (void)waitUntilDone;
- (void)markAsFinished;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 renderer:(id)a1;
- (BOOL)_initializeStorage:(id)a0 image:(id)a1 error:(out id *)a2;
- (BOOL)_isReadyForMoreData;
- (BOOL)accumulate:(id)a0 error:(out id *)a1;
- (void)_appendInputFrame:(id)a0;
- (id)nextInputFrame;
- (id)_nextInputFrame;
- (void)_initializeAccumulation;
- (BOOL)_initializeAccumulation:(out id *)a0;
- (void)_accumulate:(id)a0;
- (BOOL)_accumulate:(id)a0 error:(out id *)a1;
- (BOOL)writeLongExposureImage:(id)a0 UTI:(id)a1 colorSpace:(id)a2 error:(out id *)a3;
- (BOOL)writeMaskImage:(id)a0 UTI:(id)a1 error:(out id *)a2;
- (id)_dynamismMapWithMinImage:(id)a0 maxImage:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2;
- (BOOL)_exportOutputImage:(id)a0 format:(int)a1 colorSpace:(struct CGColorSpace { } *)a2 toURL:(id)a3 uti:(id)a4 error:(out id *)a5;

@end
