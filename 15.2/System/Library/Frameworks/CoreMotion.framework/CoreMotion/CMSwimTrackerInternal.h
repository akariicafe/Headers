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

- (void)_handleUpdates:(id)a0;
- (id)init;
- (void)_teardown;
- (void)_resetOffsets;
- (void)_querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;
- (void)_stopUpdates;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
