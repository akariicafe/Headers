@class CMIndoorOutdoorManager, NSObject;
@protocol OS_dispatch_queue, CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<CMIndoorOutdoorDelegate> _delegate;
    CMIndoorOutdoorManager *_sender;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *_connection;
    BOOL _startedUpdates;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startIndoorOutdoorUpdates;
- (void)_stopIndoorOutdoorUpdates;
- (void)_lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;

@end
