@class OADTableRow, OADTable;

@interface PMTableRowMapper : CMMapper {
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (float)height;
- (void).cxx_destruct;
- (unsigned long long)cellCount;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithOadTable:(id)a0 rowIndex:(unsigned long long)a1 parent:(id)a2;

@end
