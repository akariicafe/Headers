@class NSMutableArray;

@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}

- (unsigned long long)columnCount;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)columnAtIndex:(unsigned long long)a0;
- (id)addColumn;
- (void)flipColumnsRTL;

@end
