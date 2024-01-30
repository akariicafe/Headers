@class NSUUID;
@protocol HMMLogEventSubmitting;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (void)submitFailureEventOfType:(unsigned long long)a0 message:(id)a1;

@end
