@class NSString;

@interface TSCharts.TSCHChartTypeRadar : TSCH2DChartType

@property (nonatomic, readonly) long long userInterfaceTag;
@property (nonatomic, readonly) NSString *userInterfaceName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL usesPolarCoordinates;
@property (nonatomic, readonly) BOOL supportsTrendLines;
@property (nonatomic, readonly) BOOL supportsErrorBars;
@property (nonatomic, readonly) BOOL supportsReferenceLines;
@property (nonatomic, readonly) Class chartLayoutItemClass;
@property (nonatomic, readonly) Class categoryAxisClass;
@property (nonatomic, readonly) BOOL supportsGridlineTickmarks;
@property (nonatomic, readonly) BOOL layoutFrameShouldEncloseInfoGeometry;

- (id)init;
- (id)alternateArchiveChartTypeAndReturnWriterVersion:(unsigned long long *)a0 readerVersion:(unsigned long long *)a1 featureID:(id *)a2;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)initWithFeatureClass:(Class)a0;
- (id)seriesTypeForSeriesElementType:(int)a0 defaultSeriesIndex:(unsigned long long)a1;

@end
