@interface PPTRequestValidator : NSObject

+ (id)sharedInstance;
+ (BOOL)_validateRequestType:(long long)a0 error:(id *)a1;
+ (BOOL)_validatePredicateRequiredKey:(id)a0 value:(id)a1 error:(id *)a2;
+ (BOOL)_isMetricDefined:(id)a0 category:(id)a1 name:(id)a2;
+ (BOOL)_validatePredicateMetricValue:(id)a0 category:(id)a1 name:(id)a2 value:(id)a3 error:(id *)a4;

- (BOOL)validateDataRequest:(id)a0 error:(id *)a1;

@end
