@class NSObject;
@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> *_listener;
}

- (id)endpoint;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
