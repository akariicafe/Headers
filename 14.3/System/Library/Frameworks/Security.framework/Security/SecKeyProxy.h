@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSData;

@interface SecKeyProxy : NSObject <NSXPCListenerDelegate> {
    id _key;
    NSData *_certificate;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(struct __CFError **)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createItemFromEndpoint:(id)a0 certificate:(id *)a1 error:(id *)a2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createKeyFromEndpoint:(id)a0 error:(id *)a1;
+ (struct __SecIdentity { } *)createIdentityFromEndpoint:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 certificate:(id)a1;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (void)invalidate;

@end
