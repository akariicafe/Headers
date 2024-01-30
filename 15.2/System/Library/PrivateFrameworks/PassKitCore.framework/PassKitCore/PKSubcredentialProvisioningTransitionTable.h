@interface PKSubcredentialProvisioningTransitionTable : NSObject

- (BOOL)isStateFinal:(long long)a0;
- (BOOL)isValidStartingState:(long long)a0;
- (BOOL)isValidStateTransitionFrom:(long long)a0 to:(long long)a1;

@end
