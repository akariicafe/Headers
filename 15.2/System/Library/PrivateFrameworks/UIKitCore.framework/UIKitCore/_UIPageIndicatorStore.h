@class UIImage, NSMutableArray, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

@interface _UIPageIndicatorStore : NSObject {
    struct { unsigned char layout : 1; } _update;
    double _fittingLength;
    struct CGSize { double width; double height; } _cachedSize;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
}

@property (retain, nonatomic) NSMutableArray *store;
@property (weak, nonatomic) id<_UIPageIndicatorStoreDelegate> delegate;
@property (retain, nonatomic) UIImage *preferredImage;
@property (nonatomic) double indicatorSpacing;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) UIImage *indicatorImage;

- (void)updateStoreForNumberOfPages:(long long)a0;
- (void)updateImage:(id)a0 forPage:(long long)a1;
- (double)indicatorContentLengthForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)lastPage;
- (struct CGSize { double x0; double x1; })contentSizeForNumberOfPages:(long long)a0;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })_indicatorSizeForObject:(id)a0;
- (struct CGSize { double x0; double x1; })indicatorSize;
- (void)_resetStore;
- (void).cxx_destruct;
- (id)init;
- (id)_defaultIndicatorImage;
- (long long)_objectIndexForPage:(long long)a0 lower:(long long)a1 upper:(long long)a2;
- (void)validateDataStore;
- (double)indicatorPositionForContinuousPage:(double)a0;
- (void)invalidateLayoutCache;
- (void)_removeImageForPage:(long long)a0;
- (long long)objectIndexForPage:(long long)a0;
- (void)_insertImage:(id)a0 forPage:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForMaximumContentSizeFittingLength:(double)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (id)indicatorImageForPage:(long long)a0;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)a0 fittingLength:(double)a1;

@end
