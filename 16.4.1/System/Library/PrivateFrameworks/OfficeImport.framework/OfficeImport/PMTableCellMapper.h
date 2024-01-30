@class CMStyle, OADTableCell;

@interface PMTableCellMapper : CMMapper {
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    unsigned long long mRowIndex;
    float mWidth;
}

- (void).cxx_destruct;
- (float)widthWithState:(id)a0;
- (id)initWithOadTableCell:(id)a0 rowIndex:(unsigned long long)a1 columnIndex:(int)a2 parent:(id)a3;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapBordersWithState:(id)a0;
- (void)mapCellPropertiesWithState:(id)a0 textAnchor:(unsigned char)a1;
- (id)rowMapper;
- (id)tableMapper;

@end
