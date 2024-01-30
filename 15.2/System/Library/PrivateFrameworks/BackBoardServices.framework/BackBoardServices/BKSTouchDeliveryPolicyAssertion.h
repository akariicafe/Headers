@class NSObject;
@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> *_listener;
}

- (id)endpoint;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
