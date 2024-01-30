@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (copy, nonatomic) NSArray *subscriptions;

+ (id)syncKey;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)uniqueObjectIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
