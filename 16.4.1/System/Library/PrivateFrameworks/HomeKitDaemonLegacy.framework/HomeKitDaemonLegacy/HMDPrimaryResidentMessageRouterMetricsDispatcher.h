@protocol HMMLogEventSubmitting;

@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)a0;
- (void)submitFailureEventWithMessageName:(id)a0 failureType:(long long)a1;

@end
