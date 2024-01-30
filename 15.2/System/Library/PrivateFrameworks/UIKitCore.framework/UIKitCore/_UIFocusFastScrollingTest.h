@class UIScrollView, NSTimer;
@protocol UIFocusItem;

@interface _UIFocusFastScrollingTest : _UIFocusTest {
    unsigned long long _currentScroll;
    struct CGPoint { double x; double y; } _originalContentOffset;
    id<UIFocusItem> _originalFocusedItem;
    NSTimer *_delayTimer;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double peakScrollVelocity;
@property (nonatomic) unsigned long long numberOfScrollsToPerform;
@property (nonatomic) double delayBetweenScrolls;

- (id)initWithIdentifier:(id)a0;
- (void)_performFocusFastScrolling;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)reset;

@end
