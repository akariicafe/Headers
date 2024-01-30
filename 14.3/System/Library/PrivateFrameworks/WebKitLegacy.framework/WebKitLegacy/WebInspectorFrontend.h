@interface WebInspectorFrontend : NSObject {
    struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *m_ptr; } m_frontendClient;
}

- (void)detach;
- (void)showConsole;
- (void)setDebuggingEnabled:(BOOL)a0;
- (void)close;
- (void)attach;
- (id).cxx_construct;
- (BOOL)isDebuggingEnabled;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)a0;
- (BOOL)isProfilingJavaScript;
- (id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *x0; })a0;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
