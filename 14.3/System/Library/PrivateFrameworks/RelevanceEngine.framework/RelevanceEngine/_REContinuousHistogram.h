@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram {
    unsigned long long _binningValue;
    RESortedDictionary *_values;
}

- (void)addValue:(unsigned long long)a0;
- (unsigned long long)countForValue:(unsigned long long)a0;
- (unsigned long long)mean;
- (void).cxx_destruct;
- (unsigned long long)standardDeviation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (void)removeValue:(unsigned long long)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)initWithFeature:(id)a0 binningSize:(unsigned long long)a1;
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1 block:(id /* block */)a2;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1;

@end
