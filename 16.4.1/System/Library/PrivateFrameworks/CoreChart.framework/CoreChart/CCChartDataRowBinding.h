@protocol CCChartDataRow;

@interface CCChartDataRowBinding : NSDictionary {
    id<CCChartDataRow> _dataRow;
}

@property (readonly) unsigned long long count;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)chartViewDataRowID;
- (id)initWithChartDataRow:(id)a0;

@end
