@class NSString, MFDAMessageStore;

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>

@property (retain, nonatomic) MFDAMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)replayActionUsingStore:(id)a0;
- (BOOL)isRecoverableError:(id)a0;
- (id)fetchBodyDataForRemoteID:(id)a0 mailboxURL:(id)a1;
- (BOOL)downloadFailed;
- (id)copyItems:(id)a0 destinationMailboxURL:(id)a1;
- (id)moveItems:(id)a0 destinationMailboxURL:(id)a1;
- (id)appendItem:(id)a0 mailboxURL:(id)a1;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)a0;

@end
