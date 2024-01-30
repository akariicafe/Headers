@interface SASiriPresentationClientState : SAAceClientState

@property (nonatomic) BOOL isFullScreen;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)siriPresentationClientState;
+ (id)siriPresentationClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
