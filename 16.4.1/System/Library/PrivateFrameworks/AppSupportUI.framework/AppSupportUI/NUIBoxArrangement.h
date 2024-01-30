@class NSString;
@protocol NUIArrangementContainer, NUIBoxArrangementDataSource, _NUIBoxArrangementContainer;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer> {
    struct _NUIBoxArrangement { id<_NUIBoxArrangementContainer> container; long long horzDist; long long vertDist; BOOL hasValidMeasurement; struct vector<_NUIBoxArrangementCell, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__begin_; struct _NUIBoxArrangementCell *__end_; struct __compressed_pair<_NUIBoxArrangementCell *, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__value_; } __end_cap_; } cells; struct CGSize { double width; double height; } measureSize; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
    id<NUIArrangementContainer> _container;
    id<NUIBoxArrangementDataSource> _dataSource;
    struct { unsigned char containerDirection : 1; } _flags;
    double _scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, weak, nonatomic) id<NUIArrangementContainer> container;
@property (readonly, weak, nonatomic) id<NUIBoxArrangementDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)reloadData;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (id)initWithContainer:(id)a0 dataSource:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })layoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)populateBoxArrangementCells:(void *)a0;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 block:(id /* block */)a1;

@end
