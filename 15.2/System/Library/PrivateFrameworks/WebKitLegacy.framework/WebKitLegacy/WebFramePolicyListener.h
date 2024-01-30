@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
    struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> { struct Frame *m_ptr; } _frame;
    struct PolicyCheckIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_process; unsigned long long m_policyCheck; } _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> { void *__value_; } __ptr_; } m_callableWrapper; } _policyFunction;
    struct RetainPtr<NSURL> { void *m_ptr; } _appLinkURL;
    unsigned char _defaultPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)use;
- (void)ignore;
- (void)continue;
- (void).cxx_destruct;
- (void)invalidate;
- (void)download;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame *x0; })a0 identifier:(struct PolicyCheckIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x0; unsigned long long x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3 appLinkURL:(id)a4;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame *x0; })a0 identifier:(struct PolicyCheckIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x0; unsigned long long x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3;
- (void)receivedPolicyDecision:(unsigned char)a0;

@end
