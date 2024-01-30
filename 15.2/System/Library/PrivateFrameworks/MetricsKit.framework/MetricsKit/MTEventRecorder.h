@class NSMutableArray;
@protocol MTEventRecorderDelegate;

@interface MTEventRecorder : MTObject

@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (retain, nonatomic) NSMutableArray *eventListeners;
@property (weak, nonatomic) id<MTEventRecorderDelegate> delegate;

+ (id)_compositePromiseWithPromises:(id)a0 resolvingResultFromPromise:(id)a1;
+ (id)_metricsDataApplyingWhitelisting:(id)a0 usingRecorder:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addEventListener:(id)a0;
- (void)dealloc;
- (id)recordEvent:(id)a0;
- (void)removeEventListener:(id)a0;
- (id)flushUnreportedEvents;
- (id)recordEvent:(id)a0 toTopic:(id)a1;
- (id)sendMethod;
- (id)initWithMetricsKit:(id)a0;
- (void)maybeSubscribeToFlushNotification;
- (id)_flushUnreportedEventsUsingRecorder:(id)a0;
- (id)recordEvent:(id)a0 shouldSkipValidation:(BOOL)a1;
- (id)_recordEvent:(id)a0 toTopic:(id)a1 usingRecorder:(id)a2;
- (id)_recordEvent:(id)a0 usingRecorder:(id)a1;
- (id)_amsDelegate;

@end
