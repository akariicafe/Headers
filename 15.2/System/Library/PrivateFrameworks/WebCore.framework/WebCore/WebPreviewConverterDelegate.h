@interface WebPreviewConverterDelegate : NSObject {
    struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _delegate;
}

- (id)initWithDelegate:(void *)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
