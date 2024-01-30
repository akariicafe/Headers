@interface HMPredicateUtilities : NSObject

+ (BOOL)validatePredicate:(id)a0;
+ (BOOL)areOnlyHourAndMinuteSet:(id)a0;
+ (id)rewritePredicateForClient:(id)a0 home:(id)a1;
+ (id)rewritePredicateForDaemon:(id)a0 characteristicIsInvalid:(BOOL *)a1;
+ (BOOL)containsPresenceEvents:(id)a0;
+ (id)significantEventTypesInComparisonPredicate:(id)a0;
+ (id)personFamiliarityOptionsInComparisonPredicate:(id)a0;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inPredicate:(id)a1 validValues:(long long)a2;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inComparisonPredicate:(id)a1 validValues:(long long)a2;

@end
