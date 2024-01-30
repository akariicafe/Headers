@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSData;

@interface SecKeyProxy : NSObject <NSXPCListenerDelegate> {
    id _key;
    NSData *_certificate;
    NSXPCListener *_listener;
    _Atomic long long _clientCount;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ clientConnectionHandler;
@property (copy, nonatomic) id /* block */ clientDisconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __SecIdentity { } *)createIdentityFromEndpoint:(id)a0 error:(id *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createItemFromEndpoint:(id)a0 certificate:(id *)a1 error:(id *)a2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createKeyFromEndpoint:(id)a0 error:(id *)a1;
+ (id)targetForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(struct __CFError **)a1;

- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 certificate:(id)a1;

@end
