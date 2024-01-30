@class NSArray, AVWeakReference, NSObject, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

@interface AVPlayerItemMetadataOutputInternal : NSObject {
    NSArray *metadataIdentifiers;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *accumulationQueue;
    AVWeakReference *weakReferenceToHost;
    double advanceInterval;
    struct __CFDictionary { } *accumulatedMetadataGroups;
}

@end
