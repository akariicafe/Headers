@class _UIFlowLayoutInfo, NSMutableSet, NSMutableArray;

@interface _UIFlowLayoutSection : NSObject {
    BOOL _isValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    BOOL _fixedItemSize;
    BOOL _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    double _verticalInterstice;
    double _horizontalInterstice;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
    struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } _rowAlignmentOptions;
    struct CGSize { double width; double height; } _itemSize;
    struct _NSRange { unsigned long long location; unsigned long long length; } _validItemRange;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _sectionMargins;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _footerFrame;
}

- (id)init;
- (void).cxx_destruct;

@end
