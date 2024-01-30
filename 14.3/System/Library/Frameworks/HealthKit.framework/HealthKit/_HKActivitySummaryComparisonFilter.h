@interface _HKActivitySummaryComparisonFilter : _HKComparisonFilter

+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsActivitySummary:(id)a0;

@end
