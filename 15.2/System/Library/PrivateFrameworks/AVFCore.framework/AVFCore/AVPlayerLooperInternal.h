@class AVPlayerItem, AVQueuePlayer, AVWeakReference, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVCallbackCancellation;

@interface AVPlayerLooperInternal : NSObject {
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopRange;
    long long loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long playerOriginalActionAtItemEnd;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    BOOL waitingForLastLoopingCopyToFinish;
    long long status;
    NSError *error;
    id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
    NSMutableArray *loopingItemStatusKVOInvokers;
    AVWeakReference *weakReference;
    BOOL listeningForItemFailedToPlayToEndTime;
}

@end
