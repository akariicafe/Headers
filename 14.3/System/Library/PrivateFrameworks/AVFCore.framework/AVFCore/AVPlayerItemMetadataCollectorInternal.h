@class NSArray, AVWeakReference, NSDate, NSObject, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSArray *identifiers;
    NSArray *classifyingLabels;
    NSDate *mostRecentlyModifiedMetadataGroupTimestamp;
    AVWeakReference *weakReferenceToPlayerItem;
}

@end
