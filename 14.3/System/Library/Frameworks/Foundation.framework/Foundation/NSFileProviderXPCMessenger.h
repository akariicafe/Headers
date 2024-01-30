@class NSString, NSFileProviderProxy, NSObject;
@protocol OS_dispatch_queue, NSFileProvider;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {
    id<NSFileProvider> _fileProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderProxy *_fileProviderProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)initWithFileProvider:(id)a0 queue:(id)a1;
- (void)provideItemAtURL:(id)a0 forClaimWithID:(id)a1 madeByClientWithProcessIdentifier:(int)a2 options:(unsigned long long)a3 kernelOperation:(unsigned int)a4 completionHandler:(id /* block */)a5;
- (oneway void)cancelProvidingItemAtURL:(id)a0 forClaimWithID:(id)a1;
- (void)_makeProvider:(id)a0 provideItemAtURL:(id)a1 options:(unsigned long long)a2 forAccessClaimWithID:(id)a3 processIdentifier:(int)a4 kernelOperation:(unsigned int)a5 completionHandler:(id /* block */)a6;
- (void)dealloc;
- (void)movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkInProviderWithReply:(id /* block */)a0;
- (oneway void)observeEndOfWriteAtURL:(id)a0 forClaimWithID:(id)a1 fromProcessWithIdentifier:(int)a2;
- (oneway void)observePresentationChangeOfKind:(id)a0 forPresenterWithID:(id)a1 fromProcessWithIdentifier:(int)a2 observedUbiquityAttributes:(id)a3 url:(id)a4 newURL:(id)a5;
- (void)providePhysicalItemForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (id)initWithFileProviderProxy:(id)a0;

@end
