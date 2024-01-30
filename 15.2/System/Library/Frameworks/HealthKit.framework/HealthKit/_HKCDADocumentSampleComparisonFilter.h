@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
    NSRegularExpression *_comparisonExpression;
}

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
