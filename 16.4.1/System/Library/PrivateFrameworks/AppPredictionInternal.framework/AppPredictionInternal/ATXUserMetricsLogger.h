@class NSObject;
@protocol ATXUserMetricsLoggerTarget;

@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}

- (void)storeUserMetric:(id)a0;
- (id)initWithTarget:(id)a0;
- (id)init;
- (void)storeUserMetric:(id)a0 forceUserId:(id)a1;
- (void).cxx_destruct;

@end
