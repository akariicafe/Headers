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

+ (unsigned long long)maxBindAttemptCount;
+ (id)clientToServiceSandboxExtensionForURL:(id)a0;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_bindToPhotoLibraryIfNecessary;
- (void)_updateCachedBindResult:(id)a0;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)_connectionInterrupted:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_attemptBindToPhotoLibrary;
- (id)initWithProxyFactory:(id)a0 photoLibraryURL:(id)a1;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* block */)a0;
- (id)_unboostingRemoteObjectProxy;
- (id)_lazilyBindToPhotoLibrary;
- (id)_bindToPhotoLibrary;
- (void).cxx_destruct;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_blackholeProxyForProxy:(id)a0;
- (BOOL)_isResultAnInterruptionError:(id)a0;
- (id)_cachedBindResult;

@end
