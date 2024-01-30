@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (unsigned long long)filterCount;
- (void)addFilter:(id)a0;
- (id)filterAtIndex:(unsigned long long)a0;
- (unsigned long long)columnIndex;
- (id)init;
- (void)setColumnIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)a0;

@end
