@class UIScrollView;

@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer {
    struct WeakObjCPtr<UIScrollView> { id m_weakReference; } _lastTouchedScrollView;
}

@property (readonly, weak, nonatomic) UIScrollView *lastTouchedScrollView;

- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id).cxx_construct;

@end
