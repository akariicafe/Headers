@class CHDChart;

@interface CHDChartTypesCollection : EDCollection {
    CHDChart *mChart;
}

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)a0;
- (id)initWithChart:(id)a0;
- (void)resetSeriesOrder;

@end
