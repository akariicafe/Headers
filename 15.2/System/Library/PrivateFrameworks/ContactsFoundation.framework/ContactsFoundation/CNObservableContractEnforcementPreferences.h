@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)shouldSwizzleNilResults;

@end
