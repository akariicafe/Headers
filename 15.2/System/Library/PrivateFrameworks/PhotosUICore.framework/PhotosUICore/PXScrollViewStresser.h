@class UIScrollView, CADisplayLink;

@interface PXScrollViewStresser : NSObject

@property (class, readonly, nonatomic) PXScrollViewStresser *sharedInstance;

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned int scrollDirection;
@property (nonatomic) long long scrollCount;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;

- (void)stopScrolling;
- (void)_handleDisplayLink:(id)a0;
- (void).cxx_destruct;
- (void)startScrollingScrollView:(id)a0 axis:(long long)a1;

@end
