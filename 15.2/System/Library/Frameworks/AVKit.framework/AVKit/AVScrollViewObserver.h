@class NSString, NSTimer, NSHashTable, UIView;
@protocol AVScrollViewObserverContentView;

@interface AVScrollViewObserver : NSObject <_UIScrollViewScrollObserver>

@property (weak, nonatomic) UIView<AVScrollViewObserverContentView> *observer;
@property (copy, nonatomic) NSHashTable *observedScrollViews;
@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic, getter=isScrollingQuickly) BOOL scrollingQuickly;
@property (retain, nonatomic) NSTimer *scrollingDidEndTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateObservedScrollViews;
- (void)_updateScrollingStatus;

@end
