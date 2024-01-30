@class WebFrame;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    struct RetainPtr<WAKScrollView> { void *m_ptr; } frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
