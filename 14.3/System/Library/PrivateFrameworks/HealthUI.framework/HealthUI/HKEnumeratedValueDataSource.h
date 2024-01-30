@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSArray *enumeratedValueOrder;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 intervalComponents:(id)a3 completion:(id /* block */)a4;
- (id)_enumeratedValueOrderMapping;
- (id)_enumeratedValuesToIndices:(id)a0 mapping:(id)a1;

@end
