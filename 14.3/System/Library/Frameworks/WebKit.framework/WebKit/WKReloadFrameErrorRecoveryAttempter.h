@class NSString;

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting> {
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct RetainPtr<_WKFrameHandle> { void *m_ptr; } _frameHandle;
    struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } _urlString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
