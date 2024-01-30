@class NSString, NSMutableDictionary;

@interface TIAggdReporterMock : NSObject <TIAggdReporting>

@property (readonly, nonatomic) NSMutableDictionary *scalars;
@property (readonly, nonatomic) NSMutableDictionary *distributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toDictionary;
- (void)clearDistributionKey:(id)a0;
- (int)commit;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)pushValue:(double)a0 forKey:(id)a1;
- (void)clearScalarKey:(id)a0;
- (void)decrementKey:(id)a0;
- (void)setValue:(double)a0 forDistributionKey:(id)a1;
- (void)incrementKey:(id)a0;
- (void)significantTimeChanged;
- (id)init;
- (void)setValue:(long long)a0 forScalarKey:(id)a1;
- (void)clear;
- (void)subtractValue:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)toJsonString;
- (long long)_getScalar:(id)a0;
- (void)_setScalar:(id)a0 withValue:(long long)a1;
- (id)getDistributionObject:(id)a0;
- (long long)getScalar:(id)a0;
- (void)setScalar:(id)a0 withValue:(long long)a1;

@end
