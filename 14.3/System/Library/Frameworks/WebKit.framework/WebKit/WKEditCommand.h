@interface WKEditCommand : NSObject {
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> > { struct WebEditCommandProxy *m_ptr; } _command;
}

- (void).cxx_destruct;
- (struct WebEditCommandProxy { void /* function */ **x0; id x1; unsigned long long x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x3; struct WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x4; } *)command;
- (id)initWithWebEditCommandProxy:(struct Ref<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> > { struct WebEditCommandProxy *x0; } *)a0;
- (id).cxx_construct;

@end
