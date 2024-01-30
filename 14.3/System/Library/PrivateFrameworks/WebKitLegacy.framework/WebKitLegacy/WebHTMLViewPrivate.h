@class WAKView;

@interface WebHTMLViewPrivate : NSObject {
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    struct RetainPtr<WebEvent> { void *m_ptr; } mouseDownEvent;
    BOOL handlingMouseDownEvent;
    struct RetainPtr<WebEvent> { void *m_ptr; } keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint { double x; double y; } lastScrollPosition;
    BOOL inScrollPositionChanged;
    struct RetainPtr<WebPluginController> { void *m_ptr; } pluginController;
    struct RetainPtr<NSArray> { void *m_ptr; } pageRects;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent *x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> { void *m_ptr; } dataSource;
    SEL selectorForDoCommandBySelector;
}

- (void)clear;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
