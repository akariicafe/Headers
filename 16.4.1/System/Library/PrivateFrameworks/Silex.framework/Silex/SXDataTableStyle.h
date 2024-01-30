@class SXDataTableRowStyle, SXDataTableColumnStyle, SXDataTableBorderSides, SXDataTableCellStyle;

@interface SXDataTableStyle : SXJSONObject

@property (readonly, nonatomic) SXDataTableBorderSides *border;
@property (readonly, nonatomic) SXDataTableRowStyle *headerRows;
@property (readonly, nonatomic) SXDataTableColumnStyle *headerColumns;
@property (readonly, nonatomic) SXDataTableCellStyle *headerCells;
@property (readonly, nonatomic) SXDataTableRowStyle *rows;
@property (readonly, nonatomic) SXDataTableColumnStyle *columns;
@property (readonly, nonatomic) SXDataTableCellStyle *cells;

@end
