@protocol _UIMotionEffectEventConsumer;

@interface _UIMotionEffectEventProvider : NSObject

@property id<_UIMotionEffectEventConsumer> consumer;

- (id)currentEvent;
- (void)startGeneratingEvents;
- (double)fastUpdateIntervalForLogs;
- (double)slowUpdateIntervalForLogs;
- (void)stopGeneratingEvents;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (BOOL)wantsSynchronizedUpdates;

@end
