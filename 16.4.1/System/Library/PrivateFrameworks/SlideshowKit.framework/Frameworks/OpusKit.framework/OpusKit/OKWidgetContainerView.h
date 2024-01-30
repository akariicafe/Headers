@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView {
    OKWidgetView *_widgetView;
}

@property (nonatomic) OKWidgetView *widgetView;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;

@end
