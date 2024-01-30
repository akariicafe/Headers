@class NSObject;
@protocol ATXUserMetricsLoggerTarget;

@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)storeUserMetric:(id)a0 forceUserId:(id)a1;
- (void)storeUserMetric:(id)a0;

@end
