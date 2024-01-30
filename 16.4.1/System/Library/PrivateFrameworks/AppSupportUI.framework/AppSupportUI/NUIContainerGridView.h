@class NSArray, NSString, NSMutableArray;
@protocol _NUIGridArrangementContainer;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {
    NSMutableArray *_viewRows;
    struct _NUIGridArrangement { id<_NUIGridArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; BOOL baselineRelative; BOOL hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _arrangement;
    struct { unsigned short width; unsigned short height; } _visibleCount;
    struct map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>> { struct __tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _viewRanges;
    struct CGSize { double width; double height; } _spacing;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
    struct { unsigned char horzAlign : 8; unsigned char vertAlign : 8; unsigned char inInsertOrRemove : 1; unsigned char hasMutations : 1; } _gridViewFlags;
}

@property (copy, nonatomic) NSArray *arrangedSubviewRows;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) long long verticalDistribution;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double rowHeight;
@property (nonatomic) double columnWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerGridViewWithArrangedSubviewRows:(id)a0;

- (id).cxx_construct;
- (id)debugDictionary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setBaselineRelativeArrangement:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (id)rowAtIndex:(long long)a0;
- (void)removeColumnAtIndex:(long long)a0;
- (void)removeRowAtIndex:(long long)a0;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)addColumnWithArrangedSubviews:(id)a0;
- (id)addRowWithArrangedSubviews:(id)a0;
- (id)arrangedDebugDescription;
- (id)arrangedSubviewInColumnAtIndex:(long long)a0 rowAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)columnAtIndex:(long long)a0;
- (long long)columnIndexForArrangedSubview:(id)a0;
- (id)debugDictionaryForVisibleArrangedSubview:(id)a0;
- (void)didInsertArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)didRemoveArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)ensureArrangedSubviewsAreValid;
- (void)getColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 forArrangedSubview:(id)a2;
- (id)initWithArrangedSubviewRows:(id)a0;
- (id)insertColumnAtIndex:(long long)a0 withArrangedSubviews:(id)a1;
- (id)insertRowAtIndex:(long long)a0 withArrangedSubviews:(id)a1;
- (void)invalidateInternalStateForInvalidation:(long long)a0;
- (void)moveColumnAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)moveRowAtIndex:(long long)a0 toIndex:(long long)a1;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)a0;
- (void)populateGridArrangementCells:(void *)a0;
- (void)populateGridArrangementDimension:(void *)a0 withCells:(const void *)a1 axis:(long long)a2;
- (void)replaceArrangedSubview:(id)a0 inColumnAtIndex:(long long)a1 rowAtIndex:(long long)a2;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)a0 withView:(id)a1;
- (long long)rowIndexForArrangedSubview:(id)a0;
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)a0;
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)a0;

@end
