@protocol HMMLogEventSubmitting;

@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

- (void).cxx_destruct;
- (void)submitFailureEventWithMessageName:(id)a0 failureType:(long long)a1;
- (id)initWithLogEventSubmitter:(id)a0;

@end
