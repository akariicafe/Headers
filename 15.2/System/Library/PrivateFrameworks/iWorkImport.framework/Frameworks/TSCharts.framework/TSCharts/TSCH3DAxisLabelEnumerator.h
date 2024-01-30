@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *_axis;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxis:(id)a0 kind:(id)a1;

- (id)string;
- (int)labelPosition;
- (void)update;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)shouldRender;
- (id)stringForLabelResources:(id)a0;
- (id)initWithAxis:(id)a0 kind:(id)a1;

@end
