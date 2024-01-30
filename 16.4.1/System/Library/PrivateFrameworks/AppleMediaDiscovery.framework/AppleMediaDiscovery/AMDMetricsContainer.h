@class NSNumber, NSMutableDictionary, AMSMetricsEvent;

@interface AMDMetricsContainer : NSObject

@property (retain, nonatomic) AMSMetricsEvent *metricEvent;
@property (retain) NSMutableDictionary *logData;
@property char verbosity;
@property (retain) NSNumber *loggingProbability;

- (id)initWithLevel:(char)a0 andAction:(id)a1 andVersion:(id)a2 andBuild:(id)a3 andStorefrontId:(id)a4 withLoggingProbability:(id)a5;
- (void).cxx_destruct;

@end
