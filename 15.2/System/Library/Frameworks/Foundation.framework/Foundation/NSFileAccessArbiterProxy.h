@class NSString, NSXPCConnection, NSMutableDictionary, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate> {
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    BOOL _disableFileProviderReregistration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_idForReactor:(id)a0;
+ (id)_fileReactorDebuggingInformation;
+ (id)_willBeginOperationForReactor:(id)a0 withDescription:(id)a1;
+ (void)_accessPresenterOperationRecordsUsingBlock:(id /* block */)a0;

- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didDisconnectItemAtURL:(id)a1;
- (oneway void)revokeAccessClaimForID:(id)a0;
- (void)addFileProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFileProvider:(id)a0;
- (id)_onqueue_fileProviders;
- (id)_onqueue_filePresenters;
- (void)grantSubarbitrationClaim:(id)a0 withServer:(id)a1;
- (id)idForFileReactor:(id)a0;
- (void)getDebugInfoWithCompletionHandler:(id /* block */)a0;
- (void)performBarrier;
- (id)filePresenters;
- (id)grantAccessClaim:(id)a0 synchronouslyIfPossible:(BOOL)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityAttributes:(id)a1 ofItemAtURL:(id)a2;
- (oneway void)revokeSubarbitrationClaimForID:(id)a0;
- (void)removeFilePresenter:(id)a0;
- (oneway void)writerWithPurposeID:(id)a0 didVersionChangeOfKind:(id)a1 toItemAtURL:(id)a2 withClientID:(id)a3 name:(id)a4;
- (oneway void)writerWithPurposeID:(id)a0 didChangeUbiquityOfItemAtURL:(id)a1;
- (void)setAutomaticFileProviderReregistrationDisabled:(BOOL)a0;
- (void)performBarrierAsync:(id /* block */)a0;
- (void)addFilePresenter:(id)a0;
- (void)handleCanceledServer;
- (id)initWithServer:(id)a0 queue:(id)a1;
- (void)dealloc;
- (oneway void)writerWithPurposeID:(id)a0 didMoveItemAtURL:(id)a1 toURL:(id)a2;
- (oneway void)writerWithPurposeID:(id)a0 didReconnectItemAtURL:(id)a1;
- (oneway void)cancelAccessClaimForID:(id)a0;
- (BOOL)itemHasPresentersAtURL:(id)a0;
- (oneway void)tiePresenterForID:(id)a0 toItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeSharingOfItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didChangeItemAtURL:(id)a1;
- (oneway void)writerWithPurposeID:(id)a0 didMakeItemDisappearAtURL:(id)a1;
- (id)fileProviders;

@end
