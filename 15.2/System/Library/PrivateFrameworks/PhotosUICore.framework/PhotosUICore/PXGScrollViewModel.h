@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel>

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) long long scrollRegime;
@property (readonly, nonatomic) long long scrollDecelerationRate;
@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly, nonatomic) BOOL draggingPerformsScroll;
@property (readonly, nonatomic) unsigned long long changesOptions;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)stopScrolling;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (id)description;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setScrollRegime:(long long)a0;
- (void)didEndChangeHandling;
- (void)setScrollDecelerationRate:(long long)a0;
- (void)setDraggingPerformsScroll:(BOOL)a0;
- (void)performChanges:(id /* block */)a0 options:(unsigned long long)a1;

@end
