@class NSString, BSAtomicFlag;

@interface _UISimpleFenceProvider : NSObject <FBSWorkspaceFencing> {
    BSAtomicFlag *_trackingAny;
    BOOL _synchronizing;
}

@property (class, readonly, nonatomic) _UISimpleFenceProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (BOOL)isTrackingAnySystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (id)requestSystemAnimationFence;

@end
