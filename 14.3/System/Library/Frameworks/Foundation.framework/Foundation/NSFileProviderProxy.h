@class NSString, NSUUID, NSFileProviderXPCMessenger;
@protocol NSXPCProxyCreating, NSFileProviderXPCInterface;

@interface NSFileProviderProxy : NSFileReactorProxy {
    NSFileProviderXPCMessenger *_forwardedMessenger;
}

@property (readonly) NSString *secureID;
@property (readonly) NSUUID *uniqueID;
@property (readonly) id<NSFileProviderXPCInterface, NSXPCProxyCreating> remoteProvider;
@property BOOL wantsWriteNotifications;

- (void)forwardUsingProxy:(id)a0;
- (void)dealloc;
- (void)observePresentationChangeOfKind:(id)a0 withPresenter:(id)a1 url:(id)a2 newURL:(id)a3;
- (id)initWithClient:(id)a0 remoteProvider:(id)a1 reactorID:(id)a2 secureID:(id)a3 uniqueID:(id)a4;
- (id /* block */)provideItemForKernelRequestWithOperation:(unsigned int)a0 atURL:(id)a1 forProcess:(int)a2 withOptions:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)_clientProxy;
- (void)observeEndOfWriteAtLocation:(id)a0 forAccessClaim:(id)a1;
- (id /* block */)provideItemAtURL:(id)a0 withOptions:(unsigned long long)a1 forAccessClaim:(id)a2 completionHandler:(id /* block */)a3;
- (void)providePhysicalURLForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideLogicalURLForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setItemLocation:(id)a0;
- (void)movingItemAtLocation:(id)a0 requiresProvidingWithDestinationLocation:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)allowedForURL:(id)a0;
- (void)invalidate;

@end
