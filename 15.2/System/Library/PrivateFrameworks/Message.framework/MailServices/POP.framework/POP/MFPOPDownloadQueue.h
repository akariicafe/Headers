@class MFMailboxUid, MFMailMessageLibrary, MFSqliteMessageIDStore, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue {
    MFSqliteMessageIDStore *_uidStore;
    MFMailMessageLibrary *_library;
    MFMailboxUid *_mailbox;
    NSDate *startDate;
}

- (BOOL)addItem:(id)a0;
- (unsigned long long)sizeForItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)handleItems:(id)a0;

@end
