@class CMSkiData, NSObject;
@protocol OS_dispatch_queue;

@interface CMSkiTrackerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    CMSkiData *fMostRecentRecord;
    id /* block */ fHandler;
    double fRunDistanceOffset;
    double fRunElevationDescendedOffset;
}

- (void)_handleUpdates:(id)a0;
- (void)_queryUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)_teardown;
- (void)dealloc;
- (void)_stopUpdates;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
