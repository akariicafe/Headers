@interface WebAVSampleBufferErrorListener : NSObject {
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _layers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _renderers;
}

- (id)initWithParent:(void *)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)audioRendererWasAutomaticallyFlushed:(id)a0;
- (void)beginObservingLayer:(id)a0;
- (void)beginObservingRenderer:(id)a0;
- (void)layerFailedToDecode:(id)a0;
- (void)stopObservingLayer:(id)a0;
- (void)stopObservingRenderer:(id)a0;

@end
