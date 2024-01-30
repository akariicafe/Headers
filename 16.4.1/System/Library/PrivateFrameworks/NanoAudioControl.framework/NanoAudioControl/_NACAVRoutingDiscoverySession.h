@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _NACAVRoutingDiscoverySession : NSObject {
    void *_discoverySession;
    void *_callbackToken;
    NSObject<OS_dispatch_group> *_initialFetchGroup;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _initialFetchCompleted;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchRouteForOriginIdentifier:(id)a0 completion:(id /* block */)a1;

@end
