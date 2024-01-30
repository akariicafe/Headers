@class OADTableRow, OADTable;

@interface PMTableRowMapper : CMMapper {
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (void).cxx_destruct;
- (float)height;
- (void)mapAt:(id)a0 withState:(id)a1;
- (unsigned long long)cellCount;
- (id)initWithOadTable:(id)a0 rowIndex:(unsigned long long)a1 parent:(id)a2;

@end
