@class NSIndexPath, UITableViewHeaderFooterView;
@protocol UITable_RowDataSource;

@interface UITableViewRowData : NSObject <NSCopying> {
    id<UITable_RowDataSource> _tableView;
    UITableViewHeaderFooterView *_headerFooterViewUsedForMeasurements;
    double _tableViewWidth;
    long long _numSections;
    BOOL _estimatesHeights;
    long long _sectionRowDataCapacity;
    id *_sectionRowData;
    double _tableHeaderHeight;
    double _tableFooterHeight;
    double _heightForTableHeaderViewHiding;
    struct { unsigned char tableHeaderHeightValid : 1; unsigned char tableFooterHeightValid : 1; unsigned char tableSidePaddingValid : 1; unsigned char usesVariableMargins : 1; unsigned char pinsTableHeaderView : 1; unsigned char useChromelessPinningBehavior : 1; } _rowDataFlags;
    double _minimumRowHeight;
    double _rowSpacing;
    double _tableTopPadding;
    double _tableBottomPadding;
    double _tableSidePadding;
    NSIndexPath *_gapIndexPath;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_draggedIndexPath;
    double _defaultSectionHeaderHeight;
    double _defaultSectionFooterHeight;
    double _gapRowHeight;
    double _draggedRowHeight;
}

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
