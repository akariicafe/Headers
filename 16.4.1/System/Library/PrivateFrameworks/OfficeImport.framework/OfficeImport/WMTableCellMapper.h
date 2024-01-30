@class WDTableCell;

@interface WMTableCellMapper : CMMapper {
    WDTableCell *mWdTableCell;
    unsigned int mColSpan;
    double mHeight;
    double mWidth;
    double mLeftPadding;
    double mRightPadding;
}

- (void).cxx_destruct;
- (unsigned int)colSpan;
- (void)mapCellStyleAt:(id)a0;
- (id)initWithWDTableCell:(id)a0 atIndex:(unsigned int)a1 parent:(id)a2;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)tableMapper;

@end
