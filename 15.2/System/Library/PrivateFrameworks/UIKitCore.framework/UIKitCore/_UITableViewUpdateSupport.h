@class NSArray, NSMutableIndexSet, UITableViewRowData, NSMutableArray, UITableView;
@protocol _UITableViewIgnoreDragsToken;

@interface _UITableViewUpdateSupport : NSObject {
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    struct _NSRange { unsigned long long location; unsigned long long length; } visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange { unsigned long long location; unsigned long long length; } oldRowRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldTableViewVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newTableViewVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long *oldSectionMap;
    long long *newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    long long *oldGlobalRowMap;
    long long *newGlobalRowMap;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    long long globalReorderingRow;
    id _context;
    id<_UITableViewIgnoreDragsToken> _ignoringDragsToken;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
