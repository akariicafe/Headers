@class HKValueRange, NSArray, NSLock, NSCache;
@protocol HKAxisLabelDataSource;

@interface HKAxisLabelCache : NSObject

@property (retain, nonatomic) NSCache *mainCache;
@property (retain, nonatomic) HKValueRange *lastRequestRange;
@property (retain, nonatomic) NSArray *lastRequestData;
@property (readonly, weak, nonatomic) id<HKAxisLabelDataSource> axisLabelDataSource;
@property (readonly, nonatomic) NSLock *axisLabelCacheLock;

- (void)invalidateCache;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_axisLabel:(id)a0 insideModelRange:(id)a1;
- (id)_axisLabelsForPage:(id)a0 zoomScale:(double)a1;
- (void)_handleTimeChangeNotification:(id)a0;
- (id)allAxisLabelsForRange:(id)a0 zoomScale:(double)a1;
- (id)initWithLabelDataSource:(id)a0;

@end
