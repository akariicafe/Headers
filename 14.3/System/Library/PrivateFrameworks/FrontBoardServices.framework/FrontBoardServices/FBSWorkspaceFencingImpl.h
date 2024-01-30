@class NSString, FBSSerialQueue, BSMutableIntegerSet, NSObject, BSMutableIntegerMap;
@protocol OS_dispatch_queue;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing> {
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    unsigned long long _signpostName;
    BSMutableIntegerMap *_triggerToFenceNameMap;
    BSMutableIntegerSet *_triggersToIgnore;
    BOOL _synchronizingFence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (BOOL)isTrackingAnySystemAnimationFence;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (id)requestSystemAnimationFence;

@end
