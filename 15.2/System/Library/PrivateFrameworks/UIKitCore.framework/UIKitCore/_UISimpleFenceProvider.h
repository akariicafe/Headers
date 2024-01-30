@class NSString, BSAtomicFlag;

@interface _UISimpleFenceProvider : NSObject <UIFenceProviding> {
    BSAtomicFlag *_trackingAny;
    BOOL _synchronizing;
}

@property (class, readonly, nonatomic) _UISimpleFenceProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (id)init;
- (id)requestSystemAnimationFence;
- (BOOL)isTrackingAnySystemAnimationFence;

@end
