@interface WebAVSampleBufferErrorListener : NSObject {
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RetainPtr<AVSampleBufferDisplayLayer> *m_buffer; unsigned int m_capacity; unsigned int m_size; } _layers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RetainPtr<AVSampleBufferAudioRenderer> *m_buffer; unsigned int m_capacity; unsigned int m_size; } _renderers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)layerFailedToDecode:(id)a0;
- (void)beginObservingLayer:(id)a0;
- (void)stopObservingLayer:(id)a0;
- (void)beginObservingRenderer:(id)a0;
- (void)stopObservingRenderer:(id)a0;
- (id)initWithParent:(struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } *)a0;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;

@end
