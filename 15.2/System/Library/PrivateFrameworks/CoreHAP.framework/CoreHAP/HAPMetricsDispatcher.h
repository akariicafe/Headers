@protocol HMMLogEventSubmitting;

@interface HAPMetricsDispatcher : HMFObject

@property (retain, nonatomic) id<HMMLogEventSubmitting> logDispatcher;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;

@end
