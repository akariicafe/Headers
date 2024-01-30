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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)chart;
- (id)resources;
- (id)workbook;
- (void)setChart:(id)a0;
- (void)deleteXlChartDataSeriesCollection;
- (struct XlChartDataSeries { void /* function */ **x0; struct XlChartSeries *x1; unsigned short x2; unsigned short x3; unsigned short x4; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat **x0; struct XlChartSeriesFormat **x1; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat **x0; } x2; } x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat **x0; struct XlChartSeriesFormat **x1; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat **x0; } x2; } x6; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText **x0; struct XlChartCustomLabelText **x1; struct __compressed_pair<XlChartCustomLabelText **, ChAllocator<XlChartCustomLabelText *> > { struct XlChartCustomLabelText **x0; } x2; } x7; struct ChVector<unsigned int> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, ChAllocator<unsigned int> > { unsigned int *x0; } x2; } x8; struct ChVector<int> { int *x0; int *x1; struct __compressed_pair<int *, ChAllocator<int> > { int *x0; } x2; } x9; struct XlChartLinkedData *x10; struct XlChartLinkedData *x11; struct XlChartLinkedData *x12; struct XlChartLinkedData *x13; struct ChVector<XlChartCustomLegend *> { struct XlChartCustomLegend **x0; struct XlChartCustomLegend **x1; struct __compressed_pair<XlChartCustomLegend **, ChAllocator<XlChartCustomLegend *> > { struct XlChartCustomLegend **x0; } x2; } x14; } *)xlChartDataSeriesAtIndex:(int)a0;
- (void)readAndCacheXlChartDataSeries;
- (BOOL)hasPrimaryMixedArea;
- (BOOL)hasSecondaryMixedArea;
- (BOOL)hasPrimaryMixedColumn;
- (BOOL)hasSecondaryMixedColumn;
- (BOOL)hasPrimaryMixedLine;
- (void)setXlCurrentSeriesIndex:(int)a0;
- (struct XlChartDataSeries { void /* function */ **x0; struct XlChartSeries *x1; unsigned short x2; unsigned short x3; unsigned short x4; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat **x0; struct XlChartSeriesFormat **x1; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat **x0; } x2; } x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat **x0; struct XlChartSeriesFormat **x1; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat **x0; } x2; } x6; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText **x0; struct XlChartCustomLabelText **x1; struct __compressed_pair<XlChartCustomLabelText **, ChAllocator<XlChartCustomLabelText *> > { struct XlChartCustomLabelText **x0; } x2; } x7; struct ChVector<unsigned int> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, ChAllocator<unsigned int> > { unsigned int *x0; } x2; } x8; struct ChVector<int> { int *x0; int *x1; struct __compressed_pair<int *, ChAllocator<int> > { int *x0; } x2; } x9; struct XlChartLinkedData *x10; struct XlChartLinkedData *x11; struct XlChartLinkedData *x12; struct XlChartLinkedData *x13; struct ChVector<XlChartCustomLegend *> { struct XlChartCustomLegend **x0; struct XlChartCustomLegend **x1; struct __compressed_pair<XlChartCustomLegend **, ChAllocator<XlChartCustomLegend *> > { struct XlChartCustomLegend **x0; } x2; } x14; } *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;
- (void)setHasPrimaryMixedArea:(BOOL)a0;
- (void)setHasPrimaryMixedColumn:(BOOL)a0;
- (void)setHasPrimaryMixedLine:(BOOL)a0;
- (void)setHasSecondaryMixedArea:(BOOL)a0;
- (void)setHasSecondaryMixedColumn:(BOOL)a0;
- (BOOL)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(BOOL)a0;
- (BOOL)isMixedChart;
- (unsigned int)chartGroupIndexForType:(int)a0 isForPrimary:(BOOL)a1;

@end
