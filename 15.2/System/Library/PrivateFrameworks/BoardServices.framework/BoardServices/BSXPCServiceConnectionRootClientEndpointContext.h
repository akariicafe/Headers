@class NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    BOOL _nonLaunching;
    NSObject<OS_xpc_object> *_endpoint;
}

- (void).cxx_destruct;
- (BOOL)isClient;

@end
