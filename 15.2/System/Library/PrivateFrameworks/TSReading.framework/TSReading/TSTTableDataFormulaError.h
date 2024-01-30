@class TSWPStorage;

@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage *mFormulaError;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithFormulaError:(id)a0;

@end
