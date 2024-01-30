@interface _HKConceptIndexableComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (BOOL)supportsKeyPath:(id)a0 forTypes:(id)a1;
+ (id)allowedValueClassesForKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;

@end
