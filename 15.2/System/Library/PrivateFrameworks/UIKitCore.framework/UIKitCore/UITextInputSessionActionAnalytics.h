@class NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol UITextInputSessionActionAnalyticsDelegateSource, OS_dispatch_queue;

@interface UITextInputSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_recentActions;
    NSMutableSet *_accumulators;
    unsigned long long _maxDepth;
    BOOL _trackingDuration;
    unsigned long long _beginTimestamp;
}

@property (weak, nonatomic) id<UITextInputSessionActionAnalyticsDelegateSource> delegateSource;

+ (void)q_notifyStartingObservers;
+ (void)addObserver:(id)a0;
+ (void)removeObserver:(id)a0;
+ (void)removeEndingObserver:(id)a0;
+ (void)q_notifyEndingObserversWithSessionAnalytics:(id)a0;
+ (void)addEndingObserver:(id)a0;
+ (id)stringValueForSource:(long long)a0;
+ (id)allowedValuesForTextInputSource;

- (void)q_addActionAndUpdate:(id)a0;
- (void)didDeleteBackward:(unsigned long long)a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateAnalytics:(id /* block */)a0;
- (void)beginTrackingSessionDurationIfNecessary;
- (void)q_setupDefaultAnalytics;
- (void)q_flushRecentActions;
- (void)q_updateAnalyticsFromAccumulators;
- (unsigned long long)_optionsForText:(id)a0;
- (void)didChangeToSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didInsertText:(id)a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didBegin;
- (void)writeAnalytics;
- (void).cxx_destruct;
- (id)init;
- (id)allAccumulatorNames;
- (void)q_addAccumulator:(id)a0;
- (void)didOther;
- (id)_instanceOfActionClass:(Class)a0;
- (void)addAccumulator:(id)a0;
- (void)didUndo;
- (void)didRedo;

@end
