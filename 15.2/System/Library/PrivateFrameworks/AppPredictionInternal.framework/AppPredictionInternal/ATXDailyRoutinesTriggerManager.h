@class NSDateFormatter, NSDate;
@protocol ATXTransitionPredictorProtocol, ATXCachedTransitionPredictorProtocol, ATXContextStoreWriterProtocol;

@interface ATXDailyRoutinesTriggerManager : NSObject {
    NSDateFormatter *_dateFormatter;
    id<ATXCachedTransitionPredictorProtocol> _cachedPredictor;
    id<ATXTransitionPredictorProtocol> _transitionPredictor;
    id<ATXContextStoreWriterProtocol> _contextStoreWriter;
}

@property (retain, nonatomic) NSDate *now;

+ (id)sharedInstance;
+ (id)convenienceDateFormatter;
+ (id)_wakeupDateForExitDate:(id)a0 fromDate:(id)a1;

- (id)currentTransition;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCacheBasedPredictor:(id)a0 transitionPredictor:(id)a1 contextStoreWriter:(id)a2;
- (void)_scheduleOneShotJobAfterInterval:(double)a0;
- (void)updateWithActivity:(id)a0;

@end
