@class NSObject, DNDEventBehaviorResolutionService, EFFuture;
@protocol OS_dispatch_queue;

@interface _MFSoundBehaviorOverridesMonitor : NSObject {
    DNDEventBehaviorResolutionService *_dndBehaviorResolutionService;
    NSObject<OS_dispatch_queue> *_dndBehaviorResolutionServiceQueue;
}

@property (class, readonly) _MFSoundBehaviorOverridesMonitor *sharedInstance;

@property (readonly) EFFuture *behaviorOverrideTypes;

- (id)init;
- (void).cxx_destruct;
- (id)_resolveDNDBehavior;

@end
