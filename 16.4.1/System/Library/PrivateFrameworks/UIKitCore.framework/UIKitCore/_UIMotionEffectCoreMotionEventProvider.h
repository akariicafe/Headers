@class NSOperationQueue, CMMotionManager;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (id)currentEvent;
- (void)startGeneratingEvents;
- (double)fastUpdateIntervalForLogs;
- (void)dealloc;
- (double)slowUpdateIntervalForLogs;
- (id)init;
- (void).cxx_destruct;
- (void)stopGeneratingEvents;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;

@end
