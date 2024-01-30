@class NSSet, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, _BKSHIDEventRouterDelegate;

@interface BKSHIDEventRouter : NSObject <BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_hidEventDescriptors;
    id<_BKSHIDEventRouterDelegate> _queue_delegate;
    NSSet *_queue_cachedHidEventDescriptors;
}

@property (readonly) long long destination;
@property (readonly, copy) NSSet *hidEventDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)routerWithDestination:(long long)a0;
+ (id)defaultEventRouters;
+ (id)defaultSystemAppEventRouter;
+ (id)defaultFocusedAppEventRouter;

- (id)init;
- (BOOL)specifiesDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_setDelegate:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)hidEventDescriptors;
- (id)_initWithDestination:(long long)a0 hidEventDescriptors:(id)a1;
- (void)addHIDEventDescriptors:(id)a0;
- (void)removeHIDEventDescriptors:(id)a0;
- (BOOL)containsDescriptor:(id)a0;

@end
