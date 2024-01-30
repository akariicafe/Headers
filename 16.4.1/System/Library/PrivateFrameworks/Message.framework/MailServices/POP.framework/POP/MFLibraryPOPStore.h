@class MFPOP3Connection;

@interface MFLibraryPOPStore : MFLibraryStore {
    MFPOP3Connection *_connection;
    unsigned long long _serverMessageCount;
}

- (void)setServerMessageCount:(unsigned long long)a0;
- (unsigned long long)serverMessageCount;
- (long long)fetchNumMessages:(unsigned long long)a0 preservingUID:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 partial:(BOOL *)a3;
- (id)_fetchHeaderDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (void)_handleFlagsChangedForMessages:(id)a0 flags:(id)a1 oldFlagsByMessage:(id)a2;
- (id)bodyDataForMessage:(id)a0 isComplete:(BOOL *)a1 isPartial:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (BOOL)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 withConsumer:(id)a3 downloadIfNecessary:(BOOL)a4 didDownload:(BOOL *)a5;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 usePartDatas:(BOOL)a4 didDownload:(BOOL *)a5;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1;
- (id)messageForRemoteID:(id)a0;
- (id)messageForRemoteID:(id)a0 inMailbox:(id)a1;
- (void)messagesWereDeleted:(id)a0;
- (void)purgeMessages:(id)a0;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)a0;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)a0;

@end
