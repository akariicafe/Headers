@interface WebAVAudioSessionAvailableInputsListener : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *__value_; } __ptr_; } m_callableWrapper; } _callback;
}

- (id)initWithCallback:(struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;

@end
