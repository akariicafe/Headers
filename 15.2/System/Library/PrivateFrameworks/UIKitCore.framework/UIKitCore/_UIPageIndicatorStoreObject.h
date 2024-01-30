@class UIImage;

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) struct CGSize { double width; double height; } indicatorSize;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;

- (id)splitAtIndex:(long long)a0 withImage:(id)a1;
- (id)description;
- (BOOL)validPageWithinBound:(long long)a0;
- (void).cxx_destruct;
- (void)invalidateIndicatorSize;
- (id)initWithImage:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2;

@end
