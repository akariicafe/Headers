@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *__value_; } __ptr_; } m_callableWrapper; } _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deny;
- (void)allow;
- (id)initWithCompletionHandler:(struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } *)a0;
- (void).cxx_destruct;
- (BOOL)shouldClearCache;
- (id).cxx_construct;
- (void)denyOnlyThisRequest;

@end
