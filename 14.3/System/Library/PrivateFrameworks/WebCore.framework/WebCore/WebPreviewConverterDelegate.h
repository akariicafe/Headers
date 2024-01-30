@interface WebPreviewConverterDelegate : NSObject {
    struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _delegate;
}

- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (id).cxx_construct;
- (id)initWithDelegate:(struct PreviewPlatformDelegate { void /* function */ **x0; struct WeakPtrFactory<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; } *)a0;

@end
