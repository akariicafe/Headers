@class NSObject, NSFileAccessProcessManager;
@protocol NSFilePresenterXPCInterface, NSXPCProxyCreating;

@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating> {
    NSObject<NSFilePresenterXPCInterface, NSXPCProxyCreating> *_xpcProxy;
    NSObject<NSFilePresenterXPCInterface, NSXPCProxyCreating> *_nonboostingXPCProxy;
}

@property unsigned long long filePresenterResponses;
@property (retain) NSFileAccessProcessManager *processManager;
@property (copy) id /* block */ errorHandler;

- (void)reacquireFromWritingClaimForID:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteObjectProxy;
- (void)accommodateDeletionOfSubitemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)_presenterRespondsToSelector:(SEL)a0;
- (void)relinquishToWritingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 subitemURL:(id)a3 completionHandler:(id /* block */)a4;
- (void)relinquishToReadingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithXPCProxy:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)saveChangesWithCompletionHandler:(id /* block */)a0;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (void)_safelySendMessageWithSelector:(SEL)a0 withErrorCompletionHandler:(id /* block */)a1 sender:(id /* block */)a2;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
