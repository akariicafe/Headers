@class NSString, NSFileAccessArbiter, NSObject;
@protocol OS_dispatch_queue;

@interface NSFileAccessSubarbiter : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSFileAccessArbiter *_realSubarbiter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)writerWithPurposeID:(id)a0 didMoveItemAtURL:(id)a1 toURL:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didMakeItemDisappearAtURL:(id)a1;
- (oneway void)revokeSubarbitrationClaimForID:(id)a0;
- (oneway void)revokeAccessClaimForID:(id)a0;
- (oneway void)writerWithPurposeID:(id)a0 didChangeSharingOfItemAtURL:(id)a1;
- (void)dealloc;
- (oneway void)writerWithPurposeID:(id)a0 didDisconnectItemAtURL:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityAttributes:(id)a1 ofItemAtURL:(id)a2;
- (void)stopArbitrating;
- (id)initWithQueue:(id)a0 listener:(id)a1;
- (oneway void)cancelAccessClaimForID:(id)a0;
- (void)grantSubarbitrationClaim:(id)a0 withServer:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeItemAtURL:(id)a1;
- (id)grantAccessClaim:(id)a0 synchronouslyIfPossible:(BOOL)a1;
- (oneway void)tiePresenterForID:(id)a0 toItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didVersionChangeOfKind:(id)a1 toItemAtURL:(id)a2 withClientID:(id)a3 name:(id)a4;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didReconnectItemAtURL:(id)a1;

@end
