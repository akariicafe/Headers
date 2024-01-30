@class UIImage, NSMutableArray, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

@interface _UIPageIndicatorStore : NSObject {
    struct { unsigned char dirty : 1; double fittingLength; struct CGSize { double width; double height; } maximumSize; } _fittingSizeCache;
    struct { unsigned char dirty : 1; double fittingLength; long long startIndex; long long numberOfIndicators; } _indicatorCountCache;
    struct { unsigned char dirty : 1; double numberOfPages; struct CGSize { double width; double height; } contentSize; } _contentSizeCache;
    struct { unsigned char dirty : 1; struct _NSRange { unsigned long long location; unsigned long long length; } range; struct CGSize { double width; double height; } contentSize; } _contentSizeInRangeCache;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
}

@property (retain, nonatomic) NSMutableArray *store;
@property (weak, nonatomic) id<_UIPageIndicatorStoreDelegate> delegate;
@property (retain, nonatomic) UIImage *preferredImage;
@property (retain, nonatomic) UIImage *preferredActiveImage;
@property (nonatomic) double indicatorSpacing;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) UIImage *indicatorImage;
@property (readonly, nonatomic) long long numberOfPages;

- (struct CGSize { double x0; double x1; })_contentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)customActiveIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })contentSizeForNumberOfPages:(long long)a0;
- (void)updateStoreForNumberOfPages:(long long)a0;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)a0 fittingLength:(double)a1;
- (void)updateActiveImage:(id)a0 forPage:(long long)a1;
- (long long)objectIndexForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForMaximumContentSizeFittingLength:(double)a0;
- (struct CGSize { double x0; double x1; })_sizeForMaximumContentSizeFittingLength:(double)a0;
- (void)_removeImageForPage:(long long)a0 active:(BOOL)a1;
- (long long)_objectIndexForPage:(long long)a0 lower:(long long)a1 upper:(long long)a2;
- (id)activeIndicatorImageForPage:(long long)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (double)indicatorPositionForContinuousPage:(double)a0;
- (void)updateImage:(id)a0 forPage:(long long)a1;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (void)_resetStore;
- (struct CGSize { double x0; double x1; })minimumContentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_insertImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (void)_updateImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (id)init;
- (void)validateDataStore;
- (struct CGSize { double x0; double x1; })resolvedIndicatorLayoutSizeForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })defaultIndicatorSize;
- (struct CGSize { double x0; double x1; })_indicatorSizeForObject:(id)a0;
- (id)indicatorImageForPage:(long long)a0;
- (void)invalidateLayoutCache;
- (void).cxx_destruct;
- (id)_defaultIndicatorImage;

@end
