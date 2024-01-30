@class NSDictionary;

@interface SAClientFlowState : SAAceClientState

@property (copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)clientFlowState;
+ (id)clientFlowStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
