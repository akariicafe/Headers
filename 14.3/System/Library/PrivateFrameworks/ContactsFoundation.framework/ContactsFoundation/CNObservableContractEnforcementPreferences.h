@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)primitiveShouldEnforceRxProtocols;

@end
