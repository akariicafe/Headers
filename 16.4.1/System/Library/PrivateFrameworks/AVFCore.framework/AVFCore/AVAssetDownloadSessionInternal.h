@class AVWeakReference, NSError, NSArray, NSURL, AVURLAsset, NSObject, AVWeakReferencingDelegateStorage, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVAssetDownloadSessionInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer { } *player;
    struct OpaqueFigPlaybackItem { } *playbackItem;
    struct OpaqueFigAsset { } *figAsset;
    long long assetTypeLoadingStatus;
    long long status;
    BOOL didStartLoadingMetadata;
    NSError *error;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSArray *mediaSelections;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject { } *assetDownloader;
    NSObject<OS_dispatch_source> *fileDownloadProgressTimer;
}

@end
