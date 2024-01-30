@class AVWeakReference, AVAssetTrackInspector;

@interface AVAssetTrackInternal : NSObject {
    AVWeakReference *weakReferenceToSelf;
    AVAssetTrackInspector *trackInspector;
    AVWeakReference *assetWeakReference;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack { } *figAssetTrackNotificationSource;
}

@end
