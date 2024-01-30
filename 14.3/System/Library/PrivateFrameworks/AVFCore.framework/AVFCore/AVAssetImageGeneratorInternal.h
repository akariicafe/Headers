@class AVVideoComposition, AVAsset, AVWeakReference, NSString, AVCustomVideoCompositorSession, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetImageGeneratorInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigAssetImageGenerator { } *generator;
    AVAsset *asset;
    BOOL appliesPreferredTrackTransform;
    struct CGSize { double width; double height; } maximumSize;
    NSString *apertureMode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceBefore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceAfter;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    int nextRequestID;
    AVVideoComposition *videoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    int cancelledRequestIDThreshold;
    NSObject<OS_dispatch_queue> *generateImagesAsyncQueue;
    BOOL prefersStandardDynamicRange;
}

@end
