@interface SAWristDetectionStatusClientState : SAAceClientState

@property (nonatomic) BOOL wristDetected;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)wristDetectionStatusClientState;
+ (id)wristDetectionStatusClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
