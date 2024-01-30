@class NSArray, AVWeakReference, NSString, NSObject, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue, AVPlayerItemLegibleOutputDependencyFactory;

@interface AVPlayerItemLegibleOutputInternal : NSObject {
    id<AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    BOOL suppressesPlayerRendering;
    double advanceInterval;
    NSString *textStylingResolution;
}

@end
