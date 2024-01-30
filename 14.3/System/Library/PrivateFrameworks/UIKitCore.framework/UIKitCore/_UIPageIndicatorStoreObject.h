@class UIImage;

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2;
- (id)description;
- (id)splitAtIndex:(long long)a0 withImage:(id)a1;
- (BOOL)validPageWithinBound:(long long)a0;

@end
