@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)initWithText:(id)a0;
- (unsigned long long)rowCount;
- (id)rowAt:(unsigned long long)a0;
- (void)clearProperties;
- (int)nestingLevel;
- (id)description;
- (id)properties;
- (void).cxx_destruct;
- (id)addRow;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (int)blockType;
- (id)runIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)newRowIterator;
- (void)clearRows;
- (id)cellIterator;
- (id)newCellIterator;

@end
