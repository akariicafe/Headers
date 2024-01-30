@class NSString;
@protocol _NUIFlowArrangementContainer;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {
    struct _NUIFlowArrangement { id<_NUIFlowArrangementContainer> container; unsigned long long columns; double rowSpacing; double columnSpacing; BOOL hasValidMeasurement; struct vector<_NUIFlowArrangementCell, std::allocator<_NUIFlowArrangementCell>> { struct _NUIFlowArrangementCell *__begin_; struct _NUIFlowArrangementCell *__end_; struct __compressed_pair<_NUIFlowArrangementCell *, std::allocator<_NUIFlowArrangementCell>> { struct _NUIFlowArrangementCell *__value_; } __end_cap_; } cells; struct CGSize { double width; double height; } measureSize; struct CGSize { double width; double height; } maxSize; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
    struct { unsigned char horzAlign : 8; unsigned char vertAlign : 8; } _flowFlags;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (readonly, nonatomic) long long horizontalDistribution;
@property (readonly, nonatomic) long long verticalDistribution;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerFlowViewWithArrangedSubviews:(id)a0;

- (id)calculateViewForFirstBaselineLayout;
- (id)initWithArrangedSubviews:(id)a0;
- (id)arrangedDescription;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)setNeedsInvalidation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)setBaselineRelativeArrangement:(BOOL)a0;
- (void)dealloc;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (id)debugDictionary;
- (void)populateFlowArrangementCells:(void *)a0;

@end
