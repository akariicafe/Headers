@class NSOperationQueue, CMMotionManager;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (void)stopGeneratingEvents;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)fastUpdateIntervalForLogs;
- (id)currentEvent;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)slowUpdateIntervalForLogs;
- (void)startGeneratingEvents;

@end
