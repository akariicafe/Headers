@class NSMutableArray;

@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}

- (id)init;
- (void).cxx_destruct;
- (id)columnAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)columnCount;
- (id)addColumn;
- (void)flipColumnsRTL;

@end
