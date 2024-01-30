@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSwimTrackerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id /* block */ fHandler;
    unsigned long long fStrokeCountOffset;
    double fDistanceOffset;
    unsigned long long fLapCountOffset;
    double fActiveTime;
    unsigned long long fSegmentCountOffset;
}

- (void)_teardown;
- (void)dealloc;
- (id)init;
- (void)_handleUpdates:(id)a0;
- (void)_querySWOLFSummaryWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)_querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_resetOffsets;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_stopUpdates;

@end
