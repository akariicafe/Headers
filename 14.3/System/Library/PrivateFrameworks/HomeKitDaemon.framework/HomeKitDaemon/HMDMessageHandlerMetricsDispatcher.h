@class NSUUID, HMDLogEventDispatcher;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (id)initWithIdentifier:(id)a0 logEventDispatcher:(id)a1;
- (void)submitFailureEventOfType:(unsigned long long)a0 message:(id)a1;

@end
