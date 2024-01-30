@class NSString, PLResult, NSURL, PLLazyObject;
@protocol PLXPCProxyCreating;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;
@property (readonly, copy) NSURL *photoLibraryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientToServiceSandboxExtensionForURL:(id)a0;
+ (unsigned long long)maxBindAttemptCount;

- (void)addBarrierBlock:(id /* block */)a0;
- (id)initWithProxyFactory:(id)a0 photoLibraryURL:(id)a1;
- (id)_unboostingRemoteObjectProxy;
- (void)_updateCachedBindResult:(id)a0;
- (id)_bindToPhotoLibraryIfNecessary;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_cachedBindResult;
- (id)_bindToPhotoLibrary;
- (id)_lazilyBindToPhotoLibrary;
- (void).cxx_destruct;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_blackholeProxyForProxy:(id)a0;
- (id)_attemptBindToPhotoLibrary;
- (void)_connectionInterrupted:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)_isResultAnInterruptionError:(id)a0;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* block */)a0;

@end
