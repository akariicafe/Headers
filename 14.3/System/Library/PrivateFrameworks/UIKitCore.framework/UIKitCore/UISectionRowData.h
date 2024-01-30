@class UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {
    BOOL _valid;
    BOOL _sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
    unsigned long long _numRows;
    double _sectionHeight;
    double _headerOffset;
    double _footerOffset;
    long long _headerAlignment;
    long long _footerAlignment;
    double _maxHeaderTitleWidth;
    double _maxFooterTitleWidth;
    UITableViewRowData *_rowData;
    double _headerHeight;
    double _footerHeight;
    unsigned long long _arrayLength;
    float *_rowHeights;
    double *_rowOffsets;
}

- (void)insertRowAtIndex:(long long)a0 inSection:(long long)a1 rowHeight:(double)a2 tableViewRowData:(id)a3;
- (double)offsetForRow:(long long)a0 adjustedForGap:(BOOL)a1;
- (double)defaultSectionFooterHeight;
- (void)setHeight:(double)a0 forFooterInSection:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_defaultSectionFooterHeightForSection:(long long)a0 tableView:(id)a1 tableViewRowData:(id)a2;
- (void)setHeight:(double)a0 forRow:(long long)a1 inSection:(long long)a2;
- (long long)_rowForPoint:(struct CGPoint { double x0; double x1; })a0 extraHitSpaceBetweenRows:(double)a1;
- (void)dealloc;
- (void)refreshWithSection:(long long)a0 tableView:(id)a1 tableViewRowData:(id)a2;
- (double)heightForHeaderInSection:(long long)a0 canGuess:(BOOL)a1;
- (void)addOffset:(double)a0 fromRow:(long long)a1;
- (void)invalidateSectionOffset;
- (id)initWithRowData:(id)a0;
- (double)_offsetForFirstRow;
- (double)heightForRow:(long long)a0 inSection:(long long)a1 canGuess:(BOOL)a2;
- (double)_defaultSectionHeaderHeightForSection:(long long)a0 tableView:(id)a1 tableViewRowData:(id)a2;
- (long long)_rowForPoint:(struct CGPoint { double x0; double x1; })a0 beginningWithRow:(long long)a1 numberOfRows:(long long)a2 extraHitSpaceBetweenRows:(double)a3;
- (void)deleteRowAtIndex:(long long)a0;
- (int)sectionLocationForRow:(long long)a0;
- (double)heightForEmptySection:(long long)a0 inTableView:(id)a1 rowData:(id)a2;
- (void)allocateArraysWithCapacity:(unsigned long long)a0 forSection:(long long)a1;
- (void)setHeight:(double)a0 forHeaderInSection:(long long)a1;
- (int)sectionLocationForReorderedRow:(long long)a0;
- (double)defaultSectionHeaderHeight;
- (void)updateSectionHeightWithDelta:(double)a0 section:(long long)a1 updateFooterOffset:(BOOL)a2;
- (double)heightForFooterInSection:(long long)a0 canGuess:(BOOL)a1;
- (void)invalidate;
- (double)_headerOrFooterSizeForTable:(id)a0 title:(id)a1 detailText:(id)a2 isHeader:(BOOL)a3 stripPaddingForAbuttingView:(BOOL)a4 isTopHeader:(BOOL)a5;

@end
