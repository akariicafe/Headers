@interface SASiriPresentationClientState : SAAceClientState

@property (nonatomic) BOOL isFullScreen;

+ (id)siriPresentationClientState;
+ (id)siriPresentationClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
