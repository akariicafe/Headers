@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, RBAssertionManaging;

@interface RBResourceViolationHandler : NSObject {
    id<RBAssertionManaging> _assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
}

- (void).cxx_destruct;

@end
