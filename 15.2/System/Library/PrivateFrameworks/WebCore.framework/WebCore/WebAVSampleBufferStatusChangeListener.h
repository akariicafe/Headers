@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _parent;
}

- (id)initWithParent:(void *)a0;
- (void)begin;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id).cxx_construct;
- (void)stop;

@end
