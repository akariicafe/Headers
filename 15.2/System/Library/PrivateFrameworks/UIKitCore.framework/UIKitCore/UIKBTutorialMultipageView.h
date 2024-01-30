@class UIPageControl, NSArray, NSTimer, NSString, UIScrollView;

@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *pageScrollView;
@property (retain, nonatomic) NSArray *pageViews;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) NSTimer *nextPageScrollTimer;
@property (nonatomic) double pagingInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)configMediaView;
- (void)scrollToNextPage;
- (id)initWithPageViews:(id)a0 pagingInterval:(double)a1;
- (void)resetPageScrolling;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
