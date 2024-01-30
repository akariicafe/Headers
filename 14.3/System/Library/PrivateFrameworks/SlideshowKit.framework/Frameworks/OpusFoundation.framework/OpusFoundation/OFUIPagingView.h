@class NSString, NSMutableSet, UIScrollView, OFUIPagingViewController;
@protocol OFUIPagingViewDelegate;

@interface OFUIPagingView : OFUIView <UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    BOOL _rotationInProgress;
}

@property (nonatomic) OFUIPagingViewController *pagingViewController;
@property (nonatomic) id<OFUIPagingViewDelegate> delegate;
@property (nonatomic) double gapBetweenPages;
@property (nonatomic) long long pagesToPreload;
@property (readonly, nonatomic) long long pageCount;
@property (nonatomic) long long currentPageIndex;
@property (readonly, nonatomic) long long previousPageIndex;
@property (readonly, nonatomic) long long firstVisiblePageIndex;
@property (readonly, nonatomic) long long lastVisiblePageIndex;
@property (readonly, nonatomic) long long firstLoadedPageIndex;
@property (readonly, nonatomic) long long lastLoadedPageIndex;
@property (readonly, nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL recyclingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)didRotate;
- (void)scrollViewDidScroll:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)willAnimateRotation;
- (void)configurePages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForScrollView;
- (void)recyclePage:(id)a0;
- (id)viewForPageAtIndex:(unsigned long long)a0;
- (void)configurePage:(id)a0 forIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPageAtIndex:(unsigned long long)a0;
- (void)knownToBeMoving;
- (void)knownToBeIdle;
- (id)dequeueReusablePage;

@end
