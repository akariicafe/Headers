@interface DS_TDSHelperConnectionHandler : NSObject {
    struct TDSHelperContext { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; struct _opaque_pthread_t *x1; } x1; struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x0; struct shared_ptr<std::__1::mutex> { struct mutex *x0; struct __shared_weak_count *x1; } x1; } x0; int x1; } x2; BOOL x3; unsigned int x4; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x5; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { struct __CFString *x0; } x0; } x6; unsigned char x7[16]; struct AuthorizationOpaqueRef *x8; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x9; struct TNSRef<DS_TDSHelperConnectionHandler, void> { id x0; } x10; } *_helper;
    struct TDSMutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } fMutex; } _mutex;
}

- (id)initWithHelper:(struct TDSHelperContext { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; struct _opaque_pthread_t *x1; } x1; struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x0; struct shared_ptr<std::__1::mutex> { struct mutex *x0; struct __shared_weak_count *x1; } x1; } x0; int x1; } x2; BOOL x3; unsigned int x4; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x5; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { struct __CFString *x0; } x0; } x6; unsigned char x7[16]; struct AuthorizationOpaqueRef *x8; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x9; struct TNSRef<DS_TDSHelperConnectionHandler, void> { id x0; } x10; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handleHelperEvent:(id)a0;
- (void)clearHelper;

@end
