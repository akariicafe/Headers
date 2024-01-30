@interface _HKDiagnosticTestResultComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;

- (BOOL)_acceptsDiagnosticTestResultWithCategory:(id)a0;
- (BOOL)_acceptsDiagnosticTestResultWithReferenceRangeStatus:(long long)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
