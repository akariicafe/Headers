@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
    NSRegularExpression *_comparisonExpression;
}

+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (void).cxx_destruct;
- (void)configureInMemoryFilter;
- (BOOL)acceptsDataObject:(id)a0;

@end
