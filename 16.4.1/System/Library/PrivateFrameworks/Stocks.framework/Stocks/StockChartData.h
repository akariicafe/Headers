@class NSTimeZone, Stock, NSArray, NSDictionary, NSDate, NSMutableDictionary;

@interface StockChartData : NSObject {
    NSMutableDictionary *_imageSetCache;
    NSMutableDictionary *_yAxisLabelInfoCache;
    NSMutableDictionary *_xAxisLabelInfoCache;
    NSMutableDictionary *_labelPlacementCache;
}

@property (weak, nonatomic) Stock *stock;
@property (nonatomic) long long chartInterval;
@property (readonly) struct { double x0; double x1; unsigned long long x2; } *stockValues;
@property (readonly) unsigned int stockValueCount;
@property (retain, nonatomic) NSArray *interestingIndexes;
@property (retain, nonatomic) NSDate *marketOpenDate;
@property (retain, nonatomic) NSDate *marketCloseDate;
@property (retain, nonatomic) NSTimeZone *marketTimeZone;
@property (nonatomic) struct { double x0; double x1; unsigned long long x2; } *minValue;
@property (nonatomic) struct { double x0; double x1; unsigned long long x2; } *maxValue;
@property (nonatomic) float previousClosePrice;
@property (nonatomic) double expirationTime;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) int yAxisFractionDigits;
@property (retain, nonatomic) NSDictionary *dataSeriesDict;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (long long)labelPlacementForDisplayMode:(id)a0;
- (void)setLabelPlacement:(long long)a0 forDisplayMode:(id)a1;
- (void)setXAxisLabelInfoArray:(id)a0 forDisplayMode:(id)a1;
- (id)xAxisLabelInfoArrayForMode:(id)a0;
- (struct { double x0; double x1; unsigned long long x2; } *)allocateStockValuesWithCount:(unsigned int)a0;
- (void)clearAllImageSets;
- (id)imageSetForDisplayMode:(id)a0;
- (id)initWithStock:(id)a0 interval:(long long)a1;
- (void)setImageSet:(id)a0 forDisplayMode:(id)a1;
- (void)setYAxisLabelInfoArray:(id)a0 forDisplayMode:(id)a1;
- (id)yAxisLabelInfoArrayForMode:(id)a0;

@end
