@class UIScrollView, NSString;
@protocol _UIScrollViewScrollObserver_Internal;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal>

@property (weak, nonatomic) id<_UIScrollViewScrollObserver_Internal> controller;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didScroll;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)a0;

@end
