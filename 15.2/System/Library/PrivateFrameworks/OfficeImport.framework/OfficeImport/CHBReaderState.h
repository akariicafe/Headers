@class EBReaderSheetState, OADColorScheme;
@protocol CHAutoStyling;

@interface CHBReaderState : CHBState {
    EBReaderSheetState *mEBReaderSheetState;
    void *mXlReader;
    id<CHAutoStyling> mAutoStyling;
    int mAxisGroup;
    void *mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}

@property (readonly, nonatomic) OADColorScheme *colorScheme;

- (id)resources;
- (void).cxx_destruct;
- (void)setChart:(id)a0;
- (void *)xlCurrentPlot;
- (int)axisGroup;
- (void *)xlReader;
- (id)autoStyling;
- (const struct XlChartSeriesFormat { void /* function */ **x0; struct XlChartLineStyle *x1; struct XlChartFillStyle *x2; struct XlChartMarkerStyle *x3; struct XlChartPicF *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; unsigned short x11; unsigned short x12; int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; } *)xlCurrentDefaultSeriesFormat;
- (id)ebReaderSheetState;
- (id)workbook;
- (void)setAxisGroup:(int)a0;
- (int)xlPlotCount;
- (void)setXlCurrentPlotIndex:(int)a0;
- (void)setXlCurrentPlot:(void *)a0;
- (id)initWithEBReaderSheetState:(id)a0;
- (const struct XlChartSeriesFormat { void /* function */ **x0; struct XlChartLineStyle *x1; struct XlChartFillStyle *x2; struct XlChartMarkerStyle *x3; struct XlChartPicF *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; unsigned short x11; unsigned short x12; int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; } *)defaultFormatForXlSeries:(const void *)a0;
- (void)readAndCacheXlChartDataSeries;
- (int)xlCurrentPlotIndex;

@end
