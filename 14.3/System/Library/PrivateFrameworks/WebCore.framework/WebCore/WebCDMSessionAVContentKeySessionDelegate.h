@class NSString;

@interface WebCDMSessionAVContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    struct CDMSessionAVContentKeySession { void /* function */ **x0; void /* function */ **x1; struct WeakPtrFactory<WebCore::CDMSessionMediaSourceAVFObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x2; struct CDMPrivateMediaSourceAVFObjC *x3; struct LegacyCDMSessionClient *x4; struct Vector<WTF::RefPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::SourceBufferPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RefPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::SourceBufferPrivateAVFObjC> > *x0; unsigned int x1; unsigned int x2; } x5; struct RefPtr<JSC::GenericTypedArrayView<JSC::Uint8Adaptor>, WTF::DumbPtrTraits<JSC::GenericTypedArrayView<JSC::Uint8Adaptor> > > { struct GenericTypedArrayView<JSC::Uint8Adaptor> *x0; } x6; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x7; BOOL x8; struct RetainPtr<AVContentKeySession> { void *x0; } x9; struct RetainPtr<WebCDMSessionAVContentKeySessionDelegate> { void *x0; } x10; struct RetainPtr<AVContentKeyRequest> { void *x0; } x11; struct RefPtr<JSC::GenericTypedArrayView<JSC::Uint8Adaptor>, WTF::DumbPtrTraits<JSC::GenericTypedArrayView<JSC::Uint8Adaptor> > > { struct GenericTypedArrayView<JSC::Uint8Adaptor> *x0; } x12; struct RefPtr<JSC::GenericTypedArrayView<JSC::Uint8Adaptor>, WTF::DumbPtrTraits<JSC::GenericTypedArrayView<JSC::Uint8Adaptor> > > { struct GenericTypedArrayView<JSC::Uint8Adaptor> *x0; } x13; struct RetainPtr<NSData> { void *x0; } x14; struct Vector<int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { int *x0; unsigned int x1; unsigned int x2; } x15; int x16; int x17; int x18; } *m_parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
