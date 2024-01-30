@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (copy, nonatomic) NSArray *subscriptions;

+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
