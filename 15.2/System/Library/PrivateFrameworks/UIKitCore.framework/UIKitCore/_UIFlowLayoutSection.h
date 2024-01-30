@class NSArray, NSMutableSet, _UIFlowLayoutInfo, NSMutableArray;

@interface _UIFlowLayoutSection : NSObject {
    BOOL _isValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
}

@property (readonly, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) NSMutableArray *rows;
@property (nonatomic) double verticalInterstice;
@property (nonatomic) double horizontalInterstice;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerFrame;
@property (readonly, nonatomic) double headerDimension;
@property (readonly, nonatomic) double footerDimension;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveHeaderFrameWithSectionMarginsApplied;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveFooterFrameWithSectionMarginsApplied;
@property (weak, nonatomic) _UIFlowLayoutInfo *layoutInfo;
@property (nonatomic) struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } rowAlignmentOptions;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (readonly, nonatomic) double otherMargin;
@property (readonly, nonatomic) double beginMargin;
@property (readonly, nonatomic) double endMargin;
@property (readonly, nonatomic) double actualGap;
@property (readonly, nonatomic) double lastRowBeginMargin;
@property (readonly, nonatomic) double lastRowEndMargin;
@property (readonly, nonatomic) double lastRowActualGap;
@property (readonly, nonatomic) BOOL lastRowIncomplete;
@property (nonatomic) long long itemsCount;
@property (readonly, nonatomic) long long itemsByRowCount;
@property (readonly, nonatomic) long long indexOfIncompleteRow;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } validItemRange;
@property (readonly, nonatomic) NSArray *invalidatedIndexPaths;

- (id)addRowAtEnd:(BOOL)a0;
- (void)logInvalidSizesForHorizontalDirection:(BOOL)a0 warnAboutDelegateValues:(BOOL)a1;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;
- (id)addItem;
- (id)copyFromLayoutInfo:(id)a0;
- (void)updateEstimatedSizeForSection:(long long)a0;
- (void)setHeaderDimension:(double)a0 forSection:(long long)a1;
- (void)setEstimatedSize:(struct CGSize { double x0; double x1; })a0 forSection:(long long)a1;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rowsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addInvalidatedIndexPath:(id)a0;
- (id)snapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)logInvalidSizes;
- (id)init;
- (void)computeLayoutValidatingForwardForIndexPath:(id)a0;
- (void)invalidate;
- (void)computeLayout;
- (void)sizeChangedForItem:(id)a0 atIndexPath:(id)a1 inRow:(id)a2;
- (void)setFooterDimension:(double)a0 forSection:(long long)a1;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSection:(long long)a1 invalidating:(BOOL)a2 invalidationContext:(id)a3;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1 invalidationContext:(id)a2;

@end
