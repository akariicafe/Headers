@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct PlatformSpeechSynthesizer { void /* function */ **x0; struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisVoice> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisVoice> > *x0; unsigned int x1; unsigned int x2; } x1; BOOL x2; struct PlatformSpeechSynthesizerClient *x3; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x0; } x4; } *m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> > { struct PlatformSpeechSynthesisUtterance *m_ptr; } m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> { void *m_ptr; } m_synthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (float)mapSpeechRateToPlatformRate:(float)a0;
- (void)speakUtterance:(struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> > { struct PlatformSpeechSynthesisUtterance *x0; } *)a0;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didPauseSpeechUtterance:(id)a1;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer { void /* function */ **x0; struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisVoice> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisVoice> > *x0; unsigned int x1; unsigned int x2; } x1; BOOL x2; struct PlatformSpeechSynthesizerClient *x3; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x0; } x4; } *)a0;
- (void)speechSynthesizer:(id)a0 didContinueSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (void)pause;
- (id).cxx_construct;
- (void)resume;

@end
