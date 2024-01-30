@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    struct CoreAudioCaptureSourceFactoryIOS { void /* function */ **x0; struct RealtimeMediaSource *x1; void /* function */ **x2; struct WeakPtrFactory<WebCore::AudioSession::InterruptionObserver, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; struct RetainPtr<WebCoreAudioCaptureSourceIOSListener> { void *x0; } x4; } *_callback;
}

- (void)sessionMediaServicesWereReset:(id)a0;
- (id)initWithCallback:(struct CoreAudioCaptureSourceFactoryIOS { void /* function */ **x0; struct RealtimeMediaSource *x1; void /* function */ **x2; struct WeakPtrFactory<WebCore::AudioSession::InterruptionObserver, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; struct RetainPtr<WebCoreAudioCaptureSourceIOSListener> { void *x0; } x4; } *)a0;
- (void)invalidate;

@end
