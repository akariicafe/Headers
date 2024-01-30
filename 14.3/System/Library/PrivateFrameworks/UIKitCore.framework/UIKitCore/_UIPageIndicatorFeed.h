@class NSArray, NSMutableArray;
@protocol _UIPageIndicatorFeedDelegate;

@interface _UIPageIndicatorFeed : NSObject

@property (retain, nonatomic) NSMutableArray *activeQueue;
@property (retain, nonatomic) NSMutableArray *reuseQueue;
@property (readonly, nonatomic) NSArray *indicators;
@property (weak, nonatomic) id<_UIPageIndicatorFeedDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })indicatorSizeForCustomImage:(id)a0;
- (void)prepareIndicatorsFrom:(long long)a0 to:(long long)a1;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (void)invalidateIndicators;
- (void)reloadIndicatorImageForPage:(long long)a0;
- (void)reloadIndicatorImages;
- (id)indicatorForPage:(long long)a0;
- (void)updateReuseQueue;
- (id)indicatorForPage:(long long)a0 forSizeOnly:(BOOL)a1;

@end
