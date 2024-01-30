@class CPTable, CPZone;

@interface CPTableMaker : NSObject {
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    struct { double x0; double x1; } *rowYIntervals;
    struct { double x0; double x1; } *columnXIntervals;
}

+ (void)makeTablesInPage:(id)a0;
+ (void)makeTablesInZone:(id)a0;
+ (BOOL)isTable:(id)a0;
+ (void)makeTableFrom:(id)a0;

- (void)dealloc;
- (id)initWithZone:(id)a0;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)a0;
- (id)newTableCellFromZone:(id)a0;
- (void)determineRowsAndColumns:(BOOL)a0;
- (void)makeTable;

@end
