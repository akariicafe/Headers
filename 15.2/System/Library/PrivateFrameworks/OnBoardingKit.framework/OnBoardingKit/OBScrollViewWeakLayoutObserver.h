@protocol _UIScrollViewLayoutObserver;

@interface OBScrollViewWeakLayoutObserver : NSObject <_UIScrollViewLayoutObserver> {
    OBScrollViewWeakLayoutObserver *_selfReference;
    id<_UIScrollViewLayoutObserver> _weakLayoutObserver;
}

- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)a0;
- (id)initWithLayoutObserver:(id)a0;

@end
