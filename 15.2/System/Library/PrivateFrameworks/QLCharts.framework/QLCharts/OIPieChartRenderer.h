@protocol OIPieSliceRenderer;

@interface OIPieChartRenderer : NSObject

@property (retain) id<OIPieSliceRenderer> sliceRenderer;
@property struct __OIChart { } *chart;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChart:(struct __OIChart { } *)a0;
- (void)renderThreeDimensional:(BOOL)a0 pieFromSeriesArray:(struct __CFArray { } *)a1;
- (id)initWithChart:(struct __OIChart { } *)a0 sliceRenderer:(id)a1;

@end
