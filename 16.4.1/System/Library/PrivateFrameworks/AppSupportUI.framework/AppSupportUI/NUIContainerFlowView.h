@class __end_, NSString, __end_cap_, _NUIFlowContainer;
@protocol _NUIFlowArrangementContainer;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {
    struct _NUIFlowArrangement { id<_NUIFlowArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; BOOL baselineRelative; unsigned long long columns; double rowSpacing; double itemSpacing; double rowHeight; double itemWidth; struct vector<_NUIFlowArrangementCell, std::allocator<_NUIFlowArrangementCell>> { struct _NUIFlowArrangementCell *__begin_; struct _NUIFlowArrangementCell *__end_; struct __compressed_pair<_NUIFlowArrangementCell *, std::allocator<_NUIFlowArrangementCell>> { struct _NUIFlowArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIFlowRowContainer *, std::allocator<_NUIFlowRowContainer *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<_NUIFlowRowContainer **, std::allocator<_NUIFlowRowContainer *>> { id *__value_; } x1; } rows; _NUIFlowContainer *flowContainer; double measuredWidth; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
    struct { unsigned char horzAlign : 8; unsigned char vertAlign : 8; } _flowFlags;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) long long verticalDistribution;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double rowHeight;
@property (nonatomic) double itemWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerFlowViewWithArrangedSubviews:(id)a0;

- (id).cxx_construct;
- (id)debugDictionary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (long long)distributionForRowAtIndex:(long long)a0 ofTotalRowCount:(long long)a1 withArrangedSubviews:(id)a2;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrangedDebugDescription;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (long long)distributionForRowAtIndex:(long long)a0 ofTotalRowCount:(long long)a1 withCells:(const void *)a2;
- (struct CGSize { double x0; double x1; })fittingSizeForCell:(const struct _NUIFlowArrangementCell { id x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct { double x0; double x1; } x3; unsigned char x4 : 8; unsigned char x5 : 8; } *)a0 withProposedSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })fittingSizeForFlowPositioningOfArrangedSubview:(id)a0 withProposedSize:(struct CGSize { double x0; double x1; })a1;
- (void)invalidateInternalStateForInvalidation:(long long)a0;
- (void)populateFlowArrangementCells:(void *)a0;

@end
