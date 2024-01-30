@class NSDictionary;

@interface SAMorphunDataState : SAAceClientState

@property (copy, nonatomic) NSDictionary *assetVersionPerLocale;

+ (id)morphunDataState;
+ (id)morphunDataStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
