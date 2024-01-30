@class CHDChart;

@interface CHBState : NSObject {
    CHDChart *mChart;
    struct __CFArray { } *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    BOOL mHasPrimaryMixedArea;
    BOOL mHasPrimaryMixedColumn;
    BOOL mHasPrimaryMixedLine;
    BOOL mHasSecondaryMixedArea;
    BOOL mHasSecondaryMixedColumn;
    BOOL mHasSecondaryMixedLine;
}

- (void)dealloc;
- (id)resources;
- (id)init;
- (void).cxx_destruct;
- (id)chart;
- (unsigned int)chartGroupIndexForType:(int)a0 isForPrimary:(BOOL)a1;
- (void)deleteXlChartDataSeriesCollection;
- (BOOL)hasPrimaryMixedArea;
- (BOOL)hasPrimaryMixedColumn;
- (BOOL)hasPrimaryMixedLine;
- (BOOL)hasSecondaryMixedArea;
- (BOOL)hasSecondaryMixedColumn;
- (BOOL)hasSecondaryMixedLine;
- (BOOL)isMixedChart;
- (void)readAndCacheXlChartDataSeries;
- (void)setChart:(id)a0;
- (void)setHasPrimaryMixedArea:(BOOL)a0;
- (void)setHasPrimaryMixedColumn:(BOOL)a0;
- (void)setHasPrimaryMixedLine:(BOOL)a0;
- (void)setHasSecondaryMixedArea:(BOOL)a0;
- (void)setHasSecondaryMixedColumn:(BOOL)a0;
- (void)setHasSecondaryMixedLine:(BOOL)a0;
- (void)setXlCurrentSeriesIndex:(int)a0;
- (id)workbook;
- (void *)xlChartDataSeriesAtIndex:(int)a0;
- (void *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;

@end
