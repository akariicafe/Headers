@class NSString, NSXPCConnection, NSMutableSet, SYNotesActivationObserver, NSObject;
@protocol OS_dispatch_queue, SYLinkContextClientDelegate;

@interface SYLinkContextClient : NSObject <SYLinkContextClientProtocol>

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (readonly, nonatomic) NSMutableSet *_pendingCreateLinkCompletionBlocks;
@property (readonly, nonatomic) NSMutableSet *_pendingFetchLinkCompletionBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;
@property (retain, nonatomic) SYNotesActivationObserver *_notesObserver;
@property (readonly, nonatomic) BOOL _forTesting;
@property (copy, nonatomic) id /* block */ testingShouldSendCreateLinkRequest;
@property (weak, nonatomic) id<SYLinkContextClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)userDidRemoveContentItemDatas:(id)a0;
- (void)createConnectionWithEndpoint:(id)a0;
- (void)insertImagesData:(id)a0 completion:(id /* block */)a1;
- (void)_configureConnectionAndResume;
- (void)_sendInitialMessage;
- (void)createAndShowContextualLinkWithUserActivity:(id)a0 linkPreviewMetadata:(id)a1 preferNewDocument:(BOOL)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)_sendRequestToCreateLinkWithContentItemData:(id)a0 preferNewDocument:(BOOL)a1 completion:(id /* block */)a2;
- (id)initForTesting:(BOOL)a0;
- (void)fetchLinkContextsForUserActivity:(id)a0 completion:(id /* block */)a1;
- (oneway void)userWillAddLinkWithActivityData:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_invalidateConnection;
- (id)_linkContextDictionariesFromDataArray:(id)a0 error:(id *)a1;
- (void)_createConnectionIfNeeded;
- (void).cxx_destruct;
- (oneway void)userEditDidAddContentItemDatas:(id)a0;
- (void)_processFetchLinkContextsRequestForUserActivity:(id)a0 serviceProxy:(id)a1 completion:(id /* block */)a2;
- (void)_updateObserverAndCreateConnectionIfNeeded;

@end
