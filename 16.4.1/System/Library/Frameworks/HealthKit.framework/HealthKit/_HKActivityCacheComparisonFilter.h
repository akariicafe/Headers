@interface _HKActivityCacheComparisonFilter : _HKComparisonFilter

@property (readonly, nonatomic) long long cacheIndex;

+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (id)filterWithOperatorType:(unsigned long long)a0 cacheIndex:(long long)a1;

- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
