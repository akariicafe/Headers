@class EFFuture, IMAPAccount, EDServerMessagePersistence;
@protocol MFIMAPMailboxTaskManager;

@interface MFLibraryIMAPStore : MFLibraryStore {
    EFFuture *_serverMessagePersistenceFuture;
}

@property (readonly, nonatomic) id<MFIMAPMailboxTaskManager> taskManager;
@property (readonly, nonatomic) EDServerMessagePersistence *serverMessagePersistence;
@property (readonly, nonatomic) IMAPAccount *account;
@property (nonatomic) BOOL allowsAppend;
@property (nonatomic) unsigned int uidNext;
@property (nonatomic) unsigned int uidValidity;
@property (nonatomic) unsigned long long newHighestModSequence;

+ (id)copyRemoteIDForTemporaryUid:(unsigned int)a0;

- (void)setLibrary:(id)a0;
- (void)reselectMailbox;
- (unsigned long long)growFetchWindow;
- (id)replayAction:(id)a0;
- (id)messageIdRollCall:(id)a0;
- (void)updateServerUnreadCountClosingConnection:(BOOL)a0;
- (void)close;
- (BOOL)canFetchMessageIDs;
- (void)deleteMessagesOlderThanNumberOfDays:(int)a0 compact:(BOOL)a1;
- (BOOL)downloadMimePartNumber:(id)a0 message:(id)a1 withProgressBlock:(id /* block */)a2;
- (long long)fetchNumMessages:(unsigned long long)a0 preservingUID:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)storeSearchResultMatchingCriterion:(id)a0 limit:(unsigned int)a1 offset:(id)a2 error:(id *)a3;
- (long long)fetchMessagesWithMessageIDs:(id)a0 andSetFlags:(unsigned long long)a1;
- (id)_dataForMessage:(id)a0 readHeadersOnly:(BOOL)a1;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 partial:(BOOL *)a3;
- (BOOL)_fetchDataForMimePart:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 consumer:(id)a3;
- (id)_fetchFullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 didDownload:(BOOL *)a3;
- (id)_fetchHeaderDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (void)_handleFlagsChangedForMessages:(id)a0 flags:(id)a1 oldFlagsByMessage:(id)a2;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (BOOL)canCompact;
- (BOOL)canFetchSearchResults;
- (void)doCompact;
- (BOOL)hasValidCacheFileForMessage:(id)a0;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1;
- (id)messageForRemoteID:(id)a0;
- (id)messageForRemoteID:(id)a0 inMailbox:(id)a1;
- (id)messagesWithRemoteIDs:(id)a0;

@end
