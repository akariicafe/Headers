@class NSString;
@protocol HMMLogEventSubmitting;

@interface HMDCloudManagerMetricsDispatcher : HMFObject <HMFLogging>

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithLogEventDispatcher:(id)a0;
- (void)submitFailureEventWithModelType:(id)a0 failureCode:(unsigned long long)a1 error:(id)a2;

@end
