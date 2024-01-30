@class NSString, NSNumber;

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *metricsStateOrigin;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSNumber *taskStepStartTime;
@property (copy, nonatomic) NSString *turnId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriKitMetrics;
+ (id)siriKitMetricsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
