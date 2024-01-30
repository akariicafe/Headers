@interface WebFramePrivate : NSObject {
    struct NakedPtr<WebCore::Frame> { struct Frame *m_ptr; } coreFrame;
    struct RetainPtr<WebFrameView> { void *m_ptr; } webFrameView;
    struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> { struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> { struct WebScriptDebugger *__value_; } __ptr_; } scriptDebugger;
    id internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    struct RetainPtr<NSString> { void *m_ptr; } url;
    struct RetainPtr<NSString> { void *m_ptr; } provisionalURL;
    BOOL isCommitting;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWebFrameView:(id)a0;

@end
