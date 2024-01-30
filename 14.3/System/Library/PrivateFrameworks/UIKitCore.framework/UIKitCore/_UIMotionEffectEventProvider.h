@protocol _UIMotionEffectEventConsumer;

@interface _UIMotionEffectEventProvider : NSObject

@property id<_UIMotionEffectEventConsumer> consumer;

- (void)stopGeneratingEvents;
- (double)fastUpdateIntervalForLogs;
- (id)currentEvent;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)slowUpdateIntervalForLogs;
- (BOOL)wantsSynchronizedUpdates;
- (void)startGeneratingEvents;

@end
