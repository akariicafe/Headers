@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceListener : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)sharedServiceListener;

- (void)connectionInvalidated:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)activate;
- (id)_init;
- (void)invalidate;
- (id)initAnonymousListener;
- (void)xpcListenerEvent:(id)a0;
- (void)xpcConnectionAccept:(id)a0;

@end
