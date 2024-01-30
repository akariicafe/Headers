@class NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol UITextInputSessionActionAnalyticsDelegateSource, OS_dispatch_queue;

@interface UITextInputSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_recentActions;
    NSMutableSet *_accumulators;
    unsigned long long _maxDepth;
}

@property (weak, nonatomic) id<UITextInputSessionActionAnalyticsDelegateSource> delegateSource;

+ (void)q_notifyEndingObserversWithSessionAnalytics:(id)a0;
+ (void)addEndingObserver:(id)a0;
+ (void)removeEndingObserver:(id)a0;
+ (id)stringValueForSource:(long long)a0;
+ (id)allowedValuesForTextInputSource;

- (void)didUndo;
- (void)didRedo;
- (void)didBegin;
- (id)init;
- (void).cxx_destruct;
- (void)didOther;
- (void)q_flushRecentActions;
- (void)q_updateAnalyticsFromAccumulators;
- (id)_instanceOfActionClass:(Class)a0;
- (void)q_addActionAndUpdate:(id)a0;
- (void)addAccumulator:(id)a0;
- (void)didInsertText:(id)a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didDeleteBackward:(unsigned long long)a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didChangeToSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)q_addAccumulator:(id)a0;
- (void)q_setupDefaultAnalytics;
- (id)allAccumulatorNames;
- (void)enumerateAnalytics:(id /* block */)a0;
- (void)writeAnalytics;

@end
