@class NSArray;

@interface TNChartFormulaTypeEnumerator : NSObject {
    NSArray *_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)initWithChartFormulaStorage:(id)a0;
- (unsigned long long)nextFormulaType;

@end
