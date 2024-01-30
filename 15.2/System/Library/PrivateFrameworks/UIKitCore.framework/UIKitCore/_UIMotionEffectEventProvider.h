@protocol _UIMotionEffectEventConsumer;

@interface _UIMotionEffectEventProvider : NSObject

@property id<_UIMotionEffectEventConsumer> consumer;

- (double)fastUpdateIntervalForLogs;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (BOOL)shouldLogEvents;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (BOOL)wantsSynchronizedUpdates;
- (double)slowUpdateIntervalForLogs;

@end
