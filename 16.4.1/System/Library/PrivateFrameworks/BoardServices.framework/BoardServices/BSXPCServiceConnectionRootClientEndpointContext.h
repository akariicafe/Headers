@class NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    BOOL _nonLaunching;
    NSObject<OS_xpc_object> *_endpoint;
}

- (BOOL)isClient;
- (void).cxx_destruct;
- (BOOL)isNonLaunching;

@end
