@interface WebRootSampleBufferBoundsChangeListener : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__value_; } __ptr_; } m_callableWrapper; } _callback;
    struct RetainPtr<CALayer> { void *m_ptr; } _rootLayer;
}

- (id)initWithCallback:(void *)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)invalidate;
- (void).cxx_destruct;
- (void)begin:(id)a0;

@end
