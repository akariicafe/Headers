@class AVWeakReferencingDelegateStorage, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemSampleBufferOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToPlayerItemTrack;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    int trackID;
    int extractionID;
}

@end
