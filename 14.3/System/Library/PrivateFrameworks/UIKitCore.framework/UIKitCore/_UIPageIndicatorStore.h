@class UIImage, NSMutableArray;
@protocol _UIPageIndicatorStoreDelegate;

@interface _UIPageIndicatorStore : NSObject {
    struct { unsigned char layout : 1; } _update;
    double _fittingWidth;
    struct CGSize { double width; double height; } _cachedSize;
}

@property (retain, nonatomic) NSMutableArray *store;
@property (weak, nonatomic) id<_UIPageIndicatorStoreDelegate> delegate;
@property (retain, nonatomic) UIImage *preferredImage;
@property (nonatomic) double indicatorSpacing;
@property (readonly, nonatomic) UIImage *indicatorImage;

- (id)customIndicatorImageForPage:(long long)a0;
- (id)init;
- (long long)objectIndexForPage:(long long)a0;
- (void).cxx_destruct;
- (long long)lastPage;
- (id)indicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (double)indicatorContentWidthForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)_objectIndexForPage:(long long)a0 lower:(long long)a1 upper:(long long)a2;
- (void)invalidateLayoutCache;
- (struct CGSize { double x0; double x1; })sizeForMaximumContentSizeFittingWidth:(double)a0;
- (void)_removeImageForPage:(long long)a0;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)a0 fittingWidth:(double)a1;
- (void)updateStoreForNumberOfPages:(long long)a0;
- (void)_insertImage:(id)a0 forPage:(long long)a1;
- (struct CGSize { double x0; double x1; })contentSizeForNumberOfPages:(long long)a0;
- (void)_resetStore;
- (double)indicatorPositionForContinuousPage:(double)a0;
- (void)updateImage:(id)a0 forPage:(long long)a1;
- (struct CGSize { double x0; double x1; })indicatorSize;
- (void)validateDataStore;

@end
