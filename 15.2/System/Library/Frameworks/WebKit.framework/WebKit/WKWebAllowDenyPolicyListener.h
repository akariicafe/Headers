@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__value_; } __ptr_; } m_callableWrapper; } _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deny;
- (void)allow;
- (id)initWithCompletionHandler:(void *)a0;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
