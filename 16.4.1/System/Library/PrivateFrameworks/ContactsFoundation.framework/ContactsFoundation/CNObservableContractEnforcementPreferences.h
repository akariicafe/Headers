@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)shouldSwizzleNilResults;

@end
