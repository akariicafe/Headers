@class UIEvent;

@interface WKWebEvent : WebEvent {
    struct RetainPtr<UIEvent> { void *m_ptr; } _uiEvent;
}

@property (readonly, retain, nonatomic) UIEvent *uiEvent;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id).cxx_construct;

@end
