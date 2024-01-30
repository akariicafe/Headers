@class WMTableColumnInfo, WMBordersProperty, WMTableStyle, WDTable;

@interface WMTableMapper : CMMapper {
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (BOOL)isTableDeleted:(id)a0;

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithWDTable:(id)a0 parent:(id)a1;
- (id)columnInfo;
- (id)insideBorders;
- (id)copyColumnInfo;
- (void)setInsideBorders:(id)a0;
- (id)copyStopArrayForRow:(unsigned long long)a0;

@end
