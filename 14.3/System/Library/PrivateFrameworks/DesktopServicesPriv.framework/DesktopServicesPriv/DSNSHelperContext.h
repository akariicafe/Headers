@interface DSNSHelperContext : NSObject {
    struct TDSHelperContext { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; struct _opaque_pthread_t *x1; } x1; struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x0; struct shared_ptr<std::__1::mutex> { struct mutex *x0; struct __shared_weak_count *x1; } x1; } x0; int x1; } x2; BOOL x3; unsigned int x4; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x5; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { struct __CFString *x0; } x0; } x6; unsigned char x7[16]; struct AuthorizationOpaqueRef *x8; struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t> > { id x0; } x9; struct TNSRef<DS_TDSHelperConnectionHandler, void> { id x0; } x10; } *impl;
    struct TErrorOperationReporter { void /* function */ **x0; unsigned long long x1; unsigned int x2; long long x3; int x4; struct shared_ptr<TCFURLInfo> { struct TCFURLInfo *x0; struct __shared_weak_count *x1; } x5; id x6; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { struct __CFString *x0; } x0; } x7; unsigned int x8; int x9; } *_operationReporter;
}

- (void)quit;
- (void)dealloc;
- (id)initWithOptions:(unsigned int)a0 delegate:(id)a1;
- (BOOL)createLockNamed:(id)a0 destinationURL:(id)a1 sourceURL:(id)a2 clonedInstead:(BOOL *)a3 error:(id *)a4;
- (BOOL)copyRootMetadataAtURL:(id)a0 toDestinationURL:(id)a1 targetName:(id)a2 error:(id *)a3;
- (BOOL)sizeURL:(id)a0 destinationURL:(id)a1 targetName:(id)a2 spaceNeeds:(struct DestinationSpaceNeeds { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[1024]; char x14[1024]; long long x15; unsigned long long x16; BOOL x17; unsigned int x18; int x19; } *)a3 error:(id *)a4;
- (BOOL)ensureFreeSpace:(long long)a0 onVolume:(id)a1 error:(id *)a2;
- (BOOL)copyItemsV2AtURLs:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)preflightAndCloneIfPossible:(id)a0 toURL:(id)a1 clonesCreated:(id *)a2 sourceURLsToCopy:(id *)a3 targetNames:(id *)a4 bounceOnCollision:(BOOL)a5 error:(id *)a6;
- (BOOL)launchDesktopServicesHelper:(id *)a0;
- (void)cancelHelper;
- (BOOL)copyItemsAtURLs:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
