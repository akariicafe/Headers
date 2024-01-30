@class NSString, WKContentWorld, WKWebView, WKFrameInfo;

@interface WKScriptMessage : NSObject {
    struct RetainPtr<id> { void *m_ptr; } _body;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct RetainPtr<WKFrameInfo> { void *m_ptr; } _frameInfo;
    struct RetainPtr<NSString> { void *m_ptr; } _name;
    struct RetainPtr<WKContentWorld> { void *m_ptr; } _world;
}

@property (readonly, copy, nonatomic) id body;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, copy, nonatomic) WKFrameInfo *frameInfo;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WKContentWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithBody:(id)a0 webView:(id)a1 frameInfo:(id)a2 name:(id)a3 world:(id)a4;

@end
