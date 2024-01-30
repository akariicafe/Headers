@protocol HMMLogEventSubmitting;

@interface HAPMetricsDispatcher : HMFObject

@property (retain, nonatomic) id<HMMLogEventSubmitting> logDispatcher;

+ (id)sharedInstance;

- (void)submitLogEvent:(id)a0;
- (void).cxx_destruct;

@end
