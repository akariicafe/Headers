@class NSOperationQueue, CMMotionManager;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (double)fastUpdateIntervalForLogs;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (void).cxx_destruct;
- (id)init;
- (void)stopGeneratingEvents;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (void)dealloc;
- (double)slowUpdateIntervalForLogs;

@end
