@class CMStyle, OADTableCell;

@interface PMTableCellMapper : CMMapper {
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    unsigned long long mRowIndex;
    float mWidth;
}

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)tableMapper;
- (void)mapBordersWithState:(id)a0;
- (void)mapCellPropertiesWithState:(id)a0 textAnchor:(unsigned char)a1;
- (id)initWithOadTableCell:(id)a0 rowIndex:(unsigned long long)a1 columnIndex:(int)a2 parent:(id)a3;
- (float)widthWithState:(id)a0;
- (id)rowMapper;

@end
