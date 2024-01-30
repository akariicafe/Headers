@class NSString;
@protocol _NUIFlowArrangementContainer;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {
    struct _NUIFlowArrangement { id<_NUIFlowArrangementContainer> container; unsigned long long columns; double rowSpacing; double columnSpacing; BOOL hasValidMeasurement; struct vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> > { struct _NUIFlowArrangementCell *__begin_; struct _NUIFlowArrangementCell *__end_; struct __compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell> > { struct _NUIFlowArrangementCell *__value_; } __end_cap_; } cells; struct CGSize { double width; double height; } measureSize; struct CGSize { double width; double height; } maxSize; struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
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

- (void)setBaselineRelativeArrangement:(BOOL)a0;
- (id)debugDictionary;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (BOOL)setNeedsInvalidation:(long long)a0;
- (void)populateFlowArrangementCells:(struct vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> > { struct _NUIFlowArrangementCell *x0; struct _NUIFlowArrangementCell *x1; struct __compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell> > { struct _NUIFlowArrangementCell *x0; } x2; } *)a0;
- (id).cxx_construct;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)calculateViewForLastBaselineLayout;
- (id)initWithArrangedSubviews:(id)a0;
- (id)arrangedDescription;
- (id)calculateViewForFirstBaselineLayout;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
