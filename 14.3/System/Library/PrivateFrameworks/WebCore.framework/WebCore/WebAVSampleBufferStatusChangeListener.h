@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _parent;
}

- (void)begin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithParent:(struct LocalSampleBufferDisplayLayer { void /* function */ **x0; struct WeakPtr<WebCore::SampleBufferDisplayLayer::Client, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; struct WeakPtrFactory<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x2; struct RetainPtr<WebAVSampleBufferStatusChangeListener> { void *x0; } x3; struct RetainPtr<AVSampleBufferDisplayLayer> { void *x0; } x4; struct RetainPtr<CALayer> { void *x0; } x5; int x6; struct RefPtr<WTF::WorkQueue, WTF::DumbPtrTraits<WTF::WorkQueue> > { struct WorkQueue *x0; } x7; struct Deque<WTF::Ref<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, 0> { unsigned long long x0; unsigned long long x1; struct VectorBuffer<WTF::Ref<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, 0, WTF::FastMalloc> { struct Ref<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > *x0; unsigned int x1; unsigned int x2; } x2; } x8; BOOL x9; struct FrameRateMonitor { struct Function<void (WebCore::FrameRateMonitor::LateFrameInfo)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::FrameRateMonitor::LateFrameInfo>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::FrameRateMonitor::LateFrameInfo> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::FrameRateMonitor::LateFrameInfo> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::FrameRateMonitor::LateFrameInfo> > > { struct CallableWrapperBase<void, WebCore::FrameRateMonitor::LateFrameInfo> *x0; } x0; } x0; } x0; struct Deque<double, 120> { unsigned long long x0; unsigned long long x1; struct VectorBuffer<double, 120, WTF::FastMalloc> { double *x0; unsigned int x1; unsigned int x2; struct type { unsigned char x0[8]; } x3[120]; } x2; } x1; double x2; unsigned long long x3; } x10; } *)a0;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;

@end
