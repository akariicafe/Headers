@class EFQueue, NSString, EDMessagePersistence, EMMailboxScope, EFQuery, EFCancelationToken, NSMutableSet;

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable> {
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EFQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_persistedMessageQueue;
    long long _remaining;
    NSMutableSet *_seenGlobalMessages;
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (BOOL)shouldCancel;
- (void).cxx_destruct;
- (void)flush;
- (id)initWithMessagePersistence:(id)a0 query:(id)a1 batchSize:(long long)a2 firstBatchSize:(long long)a3 limit:(long long)a4 handler:(id /* block */)a5;
- (void)addPersistedMessage:(id)a0;
- (void)_processPersistedMessages:(id)a0;
- (void)addPersistedMessages:(id)a0;

@end
