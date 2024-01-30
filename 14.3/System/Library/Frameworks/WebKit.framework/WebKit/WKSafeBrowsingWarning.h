@class NSString;

@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate> {
    struct CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> > > { struct CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *__value_; } __ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::DumbPtrTraits<const WebKit::SafeBrowsingWarning> > { struct SafeBrowsingWarning *m_ptr; } _warning;
    struct WeakObjCPtr<WKSafeBrowsingTextView> { id m_weakReference; } _details;
    struct WeakObjCPtr<WKSafeBrowsingBox> { id m_weakReference; } _box;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 safeBrowsingWarning:(const struct SafeBrowsingWarning { unsigned int x0; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x3; BOOL x4; struct RetainPtr<NSAttributedString> { void *x0; } x5; } *)a1 completionHandler:(struct CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct Function<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> > > { struct CallableWrapperBase<void, WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *x0; } x0; } x0; } x0; } *)a2;
- (BOOL)forMainFrameNavigation;
- (void)showDetailsClicked;
- (void)goBackClicked;
- (void)layoutText;
- (void)clickedOnLink:(id)a0;
- (void)addContent;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id).cxx_construct;
- (void)updateContentSize;

@end
