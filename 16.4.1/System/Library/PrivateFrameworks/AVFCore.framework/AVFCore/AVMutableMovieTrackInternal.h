@class AVWeakReference, NSObject;
@protocol OS_dispatch_semaphore;

@interface AVMutableMovieTrackInternal : NSObject {
    struct OpaqueFigMutableMovie { } *figMutableMovie;
    int trackID;
    struct OpaqueFigAssetTrack { } *figAssetTrack;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack { } *figAssetTrackNotificationSource;
}

- (void).cxx_destruct;

@end
