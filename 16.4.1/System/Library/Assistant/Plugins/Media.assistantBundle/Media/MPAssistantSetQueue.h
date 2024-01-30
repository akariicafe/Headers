@class NSString, MPCAssistantAvailability, NSNumber, ICUserIdentity;
@protocol AFServiceHelper;

@interface MPAssistantSetQueue : SAMPSetQueue <AFServiceCommand> {
    id<AFServiceHelper> _serviceHelper;
    MPCAssistantAvailability *_availability;
    ICUserIdentity *_userIdentity;
    NSNumber *_privateListeningEnabled;
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_performMediaItemsSetQueueAsDryRun:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performMediaItemsSetQueueFromStoreIdentifiersAsDryRun:(BOOL)a0 onlyPlayableItems:(BOOL)a1 onlyLocalItems:(BOOL)a2 completion:(id /* block */)a3;
- (void)_performRadioStationSetQueueAsDryRun:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performStoreItemsSetQueueAsDryRun:(BOOL)a0 completion:(id /* block */)a1;
- (void)_playAlbumFromMediaItems:(id)a0 contextID:(id)a1 dryRun:(BOOL)a2 completion:(id /* block */)a3;
- (void)_playMediaItems:(id)a0 contextID:(id)a1 dryRun:(BOOL)a2 completion:(id /* block */)a3;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;
- (void)sendQueue:(id)a0 toDestination:(id)a1 shouldResync:(BOOL)a2 completion:(id /* block */)a3;

@end
