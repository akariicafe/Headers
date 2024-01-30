@class NSString;

@interface _UISimpleFenceProvider : NSObject <UIFenceProviding> {
    BOOL _trackingAny;
    BOOL _synchronizing;
}

@property (class, readonly, nonatomic) _UISimpleFenceProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (BOOL)isTrackingAnySystemAnimationFence;
- (id)init;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (id)requestSystemAnimationFence;

@end
