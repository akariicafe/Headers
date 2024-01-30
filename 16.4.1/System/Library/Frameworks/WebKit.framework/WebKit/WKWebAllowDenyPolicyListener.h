@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WKWebAllowDenyPolicyListener> {
    struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__value_; } __ptr_; } m_callableWrapper; } _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithCompletionHandler:(void *)a0;
- (void)allow;
- (void).cxx_destruct;
- (void)deny;

@end
