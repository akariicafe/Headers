@class NSCache, NSNumber;
@protocol HKAxisLabelDataSource;

@interface HKAxisLabelCache : NSObject

@property (retain, nonatomic) NSCache *mainCache;
@property (weak, nonatomic) id<HKAxisLabelDataSource> axisLabelDataSource;
@property (readonly, nonatomic) NSNumber *axisLabelMaximumWidth;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;
- (void)dealloc;
- (void)_handleTimeChangeNotification:(id)a0;
- (BOOL)_largeDistanceFromModelRange:(id)a0 toStartCache:(id)a1 orEndCache:(id)a2 timeScope:(long long)a3;
- (id)allAxisLabelsForRange:(id)a0 isHorizontal:(BOOL)a1 zoomScale:(double)a2 timeScope:(long long)a3;
- (void)enumerateAxisLabelsForTextInRange:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6 gridlineWidth:(double)a7 timeScope:(long long)a8 usingBlock:(id /* block */)a9;

@end
