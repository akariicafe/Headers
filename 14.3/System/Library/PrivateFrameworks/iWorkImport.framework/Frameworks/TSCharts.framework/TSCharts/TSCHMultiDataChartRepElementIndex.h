@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long seriesIndex;
@property (readonly, nonatomic) unsigned long long valueIndex;

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)a0 valueIndex:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSeriesIndex:(unsigned long long)a0 valueIndex:(unsigned long long)a1;
- (id)seriesIndexSet;
- (id)valueIndexSet;

@end
