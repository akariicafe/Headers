@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)rowAt:(unsigned long long)a0;
- (id)properties;
- (void).cxx_destruct;
- (int)nestingLevel;
- (void)clearProperties;
- (id)description;
- (id)addRow;
- (id)initWithText:(id)a0;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (unsigned long long)rowCount;
- (int)blockType;
- (id)runIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)newRowIterator;
- (void)clearRows;
- (id)cellIterator;
- (id)newCellIterator;

@end
