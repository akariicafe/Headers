@class NSMutableDictionary, NSMutableArray;

@interface TSUHTMLTable : NSObject {
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
}

@property (readonly, nonatomic) unsigned long long lastRowIndex;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long rowClassStride;

+ (id)_keyForCell:(unsigned long long)a0 :(unsigned long long)a1;
+ (id)_attributesStringFromAttributes:(id)a0;
+ (id)htmlTable;

- (id)init;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (id)markup;
- (void)addRowWithCellMarkup:(id)a0;
- (void)setClass:(id)a0 ofColumnIndex:(unsigned long long)a1;
- (unsigned long long)indexOfColumnWithTitle:(id)a0;
- (void)addRowWithCellText:(id)a0;
- (void)setColumnClasses:(id)a0;
- (void)setRowClass:(id)a0 atRowIndex:(unsigned long long)a1;
- (void)setColumnHeaders:(id)a0;
- (void)setCellMarkup:(id)a0 atRowIndex:(unsigned long long)a1 columnIndex:(unsigned long long)a2;
- (void)setCellAttributes:(id)a0 rowIndex:(unsigned long long)a1 columnIndex:(unsigned long long)a2;
- (void)deleteColumnWithTitle:(id)a0;

@end
