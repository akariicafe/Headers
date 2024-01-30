@class UIScrollView, CADisplayLink;

@interface _PUScrollViewPPTScrollHelper : NSObject

@property (nonatomic, setter=_setOriginContentOffset:) struct CGPoint { double x; double y; } originContentOffset;
@property (weak, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;
@property (nonatomic, setter=_setLastIncrementTime:) double _lastIncrementTime;
@property (copy, nonatomic, setter=_setIncrementHandler:) id /* block */ _incrementHandler;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;

- (id)init;
- (id)initWithScrollView:(id)a0;
- (void).cxx_destruct;
- (void)_endScroll;
- (void)_incrementScroll;
- (void)scrollWithStartHandler:(id /* block */)a0 incrementHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
