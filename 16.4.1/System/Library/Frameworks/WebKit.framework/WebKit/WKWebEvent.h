@class UIEvent;

@interface WKWebEvent : WebEvent {
    struct RetainPtr<UIEvent> { void *m_ptr; } _uiEvent;
}

@property (readonly, retain, nonatomic) UIEvent *uiEvent;

- (id).cxx_construct;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
