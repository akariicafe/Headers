@class NSString, NSTimer, NSHashTable, UIView;

@interface AVScrollingObserver : NSObject <_UIScrollViewScrollObserver> {
    UIView *_view;
    NSHashTable *_observedScrollViews;
    NSHashTable *_delegates;
    NSTimer *_scrollingDidEndTimer;
}

@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic, getter=isScrollingQuickly) BOOL scrollingQuickly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)update;
- (void)addDelegate:(id)a0;
- (void)_updateScrollingStatus;
- (void).cxx_destruct;

@end
