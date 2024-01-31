@interface CNSharedProfileStateOracleTestDouble : CNSharedProfileStateOracle

+ (BOOL)isFeatureEnabled;
+ (BOOL)shouldBypassPersistenceCheck;

@end
