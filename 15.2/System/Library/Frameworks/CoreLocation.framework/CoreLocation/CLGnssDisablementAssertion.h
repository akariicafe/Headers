@interface CLGnssDisablementAssertion : NSObject {
    struct unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> { struct __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>> { struct CLGnssDisablementAssertionInternal *__value_; } __ptr_; } fInternal;
}

+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;

- (id)initWithRegistrationMessageName:(const char *)a0 messagePayload:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id).cxx_construct;

@end
