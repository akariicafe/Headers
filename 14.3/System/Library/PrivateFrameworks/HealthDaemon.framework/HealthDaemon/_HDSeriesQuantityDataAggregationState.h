@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState

@property (readonly, nonatomic) HDQuantityDatum *lastDatum;
@property (readonly, nonatomic) long long length;

- (void).cxx_destruct;
- (id)initWithRemainingSensorData:(id)a0 currentSeries:(id)a1 lastDatum:(id)a2 length:(long long)a3;

@end
