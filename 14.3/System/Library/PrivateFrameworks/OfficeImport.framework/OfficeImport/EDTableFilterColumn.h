@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)filterAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addFilter:(id)a0;
- (id)description;
- (unsigned long long)columnIndex;
- (void)setColumnIndex:(unsigned long long)a0;
- (unsigned long long)filterCount;
- (void)setFiltersRelation:(int)a0;
- (int)filtersRelation;

@end
