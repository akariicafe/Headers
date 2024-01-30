@class NSString;
@protocol _NUIGridArrangementContainer;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { id<_NUIGridArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; BOOL baselineRelative; BOOL hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _arrangement;
    struct { unsigned short width; unsigned short height; } _visibleCount;
    struct map<UIView *, double, std::less<UIView *>, std::allocator<std::pair<UIView *const, double>>> { struct __tree<std::__value_type<UIView *, double>, std::__map_value_compare<UIView *, std::__value_type<UIView *, double>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, double>, std::less<UIView *>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _customSpacings;
    struct { unsigned char alignment : 8; unsigned char distribution : 8; unsigned char axis : 4; } _stackViewFlags;
}

@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerStackViewWithAxis:(long long)a0 arrangedSubviews:(id)a1;
+ (id)horizontalContainerStackViewWithArrangedSubviews:(id)a0;
+ (id)verticalContainerStackViewWithArrangedSubviews:(id)a0;

- (id)calculateViewForFirstBaselineLayout;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (id)arrangedDescription;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)setNeedsInvalidation:(long long)a0;
- (double)customSpacingAfterView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)setBaselineRelativeArrangement:(BOOL)a0;
- (void)dealloc;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (id)debugDictionary;
- (void)populateGridArrangementCells:(void *)a0;
- (void)populateGridArrangementDimension:(void *)a0 withCells:(const void *)a1 axis:(long long)a2;
- (void)didRemoveArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)setSpacing:(double)a0 afterArrangedSubviewAtIndex:(long long)a1;

@end
