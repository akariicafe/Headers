@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {
    DAFolder *_DAFolder;
}

@property (nonatomic) BOOL backedByVirtualAllSearchMailbox;

- (unsigned long long)fetchWindow;
- (void).cxx_destruct;
- (id)folderIDForFetching;
- (BOOL)replayFlagChange:(id)a0 forRemoteIDs:(id)a1 error:(id *)a2 completed:(BOOL *)a3;
- (id)initWithMailboxUid:(id)a0 readOnly:(BOOL)a1;
- (BOOL)shouldGrowFetchWindow;
- (BOOL)_fetchDataForMimePart:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 consumer:(id)a3;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 partial:(BOOL *)a3;
- (unsigned long long)growFetchWindow;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)storeData:(id)a0 forMimePart:(id)a1 isComplete:(BOOL)a2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)a0 compact:(BOOL)a1;
- (void)setFlagsForAllMessagesFromDictionary:(id)a0;
- (BOOL)allowsAppend;
- (void)purgeMessagesBeyondLimit:(unsigned long long)a0 keepingMessage:(id)a1;
- (id)loadMeetingExternalIDForMessage:(id)a0;
- (id)loadMeetingDataForMessage:(id)a0;
- (id)loadMeetingMetadataForMessage:(id)a0;
- (BOOL)hasMoreFetchableMessages;
- (long long)fetchNumMessages:(unsigned long long)a0 preservingUID:(id)a1 options:(unsigned long long)a2;
- (BOOL)canFetchSearchResults;
- (id)storeSearchResultMatchingSearchText:(id)a0 criterion:(id)a1 limit:(unsigned int)a2 offset:(id)a3 error:(id *)a4;
- (id)messageForRemoteID:(id)a0;
- (id)messageForRemoteID:(id)a0 inMailbox:(id)a1;
- (BOOL)shouldDownloadBodyDataForMessage:(id)a0;
- (void)_remoteIDsMatchingSearchText:(id)a0 predicate:(id)a1 limit:(unsigned int)a2 offset:(id)a3 filterByDate:(BOOL)a4 handler:(id /* block */)a5;
- (id)_fetchBodyDataForSearchResult:(id)a0 folderID:(id)a1 format:(int)a2 streamConsumer:(id)a3;
- (id)_fetchBodyDataForNormalMessage:(id)a0 format:(int)a1 part:(id)a2 streamConsumer:(id)a3;
- (id)defaultAlternativeForPart:(id)a0;
- (id)bestAlternativeForPart:(id)a0;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)a0;
- (id)fetchBodyDataForRemoteID:(id)a0;
- (id)_downloadHeadersForMessages:(id)a0;
- (BOOL)messageCanBeTriaged:(id)a0;

@end
