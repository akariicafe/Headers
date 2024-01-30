@class ATXUserMetricsPBActionPredictionsMetricsLogEntry;

@interface ATXActionUserMetricsLog : NSObject <ATXUserMetricsLog> {
    ATXUserMetricsPBActionPredictionsMetricsLogEntry *_metric;
}

- (id)scheme;
- (void).cxx_destruct;
- (double)enrollmentPeriod;
- (double)enrollmentRate;
- (id)getPBCodableWithUserId:(id)a0;
- (id)initWithActionResponse:(id)a0 abGroup:(id)a1 rankOfFirstEngagement:(id)a2 currentCalendar:(id)a3;

@end
