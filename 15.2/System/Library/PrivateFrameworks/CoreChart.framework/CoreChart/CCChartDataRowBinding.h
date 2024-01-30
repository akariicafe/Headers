@protocol CCChartDataRow;

@interface CCChartDataRowBinding : NSDictionary {
    id<CCChartDataRow> _dataRow;
}

@property (readonly) unsigned long long count;

- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)chartViewDataRowID;
- (id)initWithChartDataRow:(id)a0;

@end
