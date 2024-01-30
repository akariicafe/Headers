@class NSString;

@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate> {
    struct CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> { void *__value_; } __ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> { struct SafeBrowsingWarning *m_ptr; } _warning;
    struct WeakObjCPtr<WKSafeBrowsingTextView> { id m_weakReference; } _details;
    struct WeakObjCPtr<WKSafeBrowsingBox> { id m_weakReference; } _box;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentSize;
- (void)layoutSubviews;
- (void)showDetailsClicked;
- (void)goBackClicked;
- (void)layoutText;
- (void)clickedOnLink:(id)a0;
- (void)addContent;
- (BOOL)forMainFrameNavigation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 safeBrowsingWarning:(const void *)a1 completionHandler:(void *)a2;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)didMoveToWindow;
- (id).cxx_construct;

@end
