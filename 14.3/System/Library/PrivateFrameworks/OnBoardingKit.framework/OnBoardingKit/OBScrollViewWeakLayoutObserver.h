@protocol _UIScrollViewLayoutObserver;

@interface OBScrollViewWeakLayoutObserver : NSObject <_UIScrollViewLayoutObserver> {
    OBScrollViewWeakLayoutObserver *_selfReference;
    id<_UIScrollViewLayoutObserver> _weakLayoutObserver;
}

- (void).cxx_destruct;
- (id)initWithLayoutObserver:(id)a0;
- (void)_scrollViewDidLayoutSubviews:(id)a0;

@end
