@class CMSkiData, NSObject;
@protocol OS_dispatch_queue;

@interface CMSkiTrackerInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    CMSkiData *fMostRecentRecord;
    id /* block */ fHandler;
    double fRunDistanceOffset;
    double fRunElevationDescendedOffset;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_stopUpdates;
- (void)_handleUpdates:(id)a0;
- (void)_queryUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
