@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (unsigned long long)filterCount;
- (void)setColumnIndex:(unsigned long long)a0;
- (id)description;
- (void)addFilter:(id)a0;
- (unsigned long long)columnIndex;
- (void).cxx_destruct;
- (id)init;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)setFiltersRelation:(int)a0;
- (int)filtersRelation;

@end
