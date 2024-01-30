@class TSWPStorage;

@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage *mFormulaError;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithFormulaError:(id)a0;

@end
