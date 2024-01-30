@class REFeature;

@interface REHistogram : NSObject <NSCopying>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long mean;
@property (readonly, nonatomic) unsigned long long standardDeviation;

- (void)addValue:(unsigned long long)a0;
- (unsigned long long)countForValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)removeValue:(unsigned long long)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeature:(id)a0;
- (id)initWithFeature:(id)a0 binningSize:(unsigned long long)a1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1;

@end
