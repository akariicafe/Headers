@class WebFrameView;

@interface WebFramePrivate : NSObject {
    struct NakedPtr<WebCore::Frame> { struct Frame *m_ptr; } coreFrame;
    WebFrameView *webFrameView;
    struct unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> > { struct __compressed_pair<WebScriptDebugger *, std::__1::default_delete<WebScriptDebugger> > { struct WebScriptDebugger *__value_; } __ptr_; } scriptDebugger;
    id internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    struct RetainPtr<NSString> { void *m_ptr; } url;
    struct RetainPtr<NSString> { void *m_ptr; } provisionalURL;
    BOOL isCommitting;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)setWebFrameView:(id)a0;

@end
