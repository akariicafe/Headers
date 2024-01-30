@class REFeature;

@interface REHistogram : NSObject <NSCopying>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long mean;
@property (readonly, nonatomic) unsigned long long standardDeviation;

- (void)addValue:(unsigned long long)a0;
- (unsigned long long)countForValue:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeValue:(unsigned long long)a0;
- (id)initWithFeature:(id)a0;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)a0 maxValue:(unsigned long long)a1;
- (id)initWithFeature:(id)a0 binningSize:(unsigned long long)a1;

@end
