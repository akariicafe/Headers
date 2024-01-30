@class AVWeakReference, NSError, NSArray, NSURL, AVURLAsset, NSObject, AVWeakReferencingDelegateStorage, NSNumber;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadSessionInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer { } *player;
    struct OpaqueFigPlaybackItem { } *playbackItem;
    struct OpaqueFigAsset { } *figAsset;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    long long assetTypeLoadingStatus;
    long long status;
    BOOL didStartLoadingMetadata;
    NSError *error;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *figCallbackQueue;
    NSArray *mediaSelections;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject { } *assetDownloader;
}

@end
