@interface PKSubcredentialProvisioningTransitionTable : NSObject

- (BOOL)isValidStateTransitionFrom:(long long)a0 to:(long long)a1;
- (BOOL)isValidStartingState:(long long)a0;
- (BOOL)isStateFinal:(long long)a0;

@end
