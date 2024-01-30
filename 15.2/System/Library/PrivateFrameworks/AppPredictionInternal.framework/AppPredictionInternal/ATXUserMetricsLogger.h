@class NSObject;
@protocol ATXUserMetricsLoggerTarget;

@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)storeUserMetric:(id)a0 forceUserId:(id)a1;
- (void)storeUserMetric:(id)a0;

@end
