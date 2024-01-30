@class CHDChart;

@interface CHDChartTypesCollection : EDCollection {
    CHDChart *mChart;
}

- (unsigned long long)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithChart:(id)a0;
- (void)resetSeriesOrder;

@end
