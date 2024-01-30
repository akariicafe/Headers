@protocol NNMKDeviceRegistryHolder;

@interface NNMKSyncController : NSObject

@property (weak, nonatomic) id<NNMKDeviceRegistryHolder> delegate;

- (BOOL)_validateMessage:(id)a0;
- (BOOL)canSyncMessage:(id)a0 forMailbox:(id)a1;
- (BOOL)isValidMessageStatus:(unsigned long long)a0 forMailbox:(id)a1;
- (id)filterMessages:(id)a0 byAlreadySynced:(BOOL)a1 byMailbox:(id)a2;
- (BOOL)isMessage:(id)a0 fromMailbox:(id)a1;
- (id)watchMessageIdFromMessageId:(id)a0;
- (id)removeInvalidMailboxesFromMailboxSelection:(id)a0;
- (BOOL)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)a0;
- (id)mailboxForMessageWithId:(id)a0;
- (id)mailboxesToSync;
- (void)groupMessagesByMailbox:(id)a0 mailboxes:(id)a1 block:(id /* block */)a2;
- (id)filterMessages:(id)a0 receivedBeforeDate:(id)a1;
- (id)watchAttachmentContentIdFromContentId:(id)a0;
- (id)deviceRegistry;
- (BOOL)doesMessageBelongToSyncedMailboxes:(id)a0;
- (id)groupMessagesByMailboxId:(id)a0;
- (id)messageIdFromWatchMessageId:(id)a0;
- (id)mailboxWithId:(id)a0;
- (void).cxx_destruct;
- (BOOL)canSyncMailbox:(id)a0;

@end
