@class NSString, WKConnection;

@interface WKWebProcessPlugInController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundle> { struct type { unsigned char __lx[64]; } data; } _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> { void *m_ptr; } _principalClassInstance;
}

@property (readonly) struct OpaqueWKBundle { } *_bundleRef;
@property (readonly) WKConnection *connection;
@property (readonly) id parameters;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setPrincipalClassInstance:(id)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)extendClassesForParameterCoder:(id)a0;
- (void).cxx_destruct;

@end
