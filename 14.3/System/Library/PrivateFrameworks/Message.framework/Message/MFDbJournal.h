@class NSString, MFMailboxUid;

@interface MFDbJournal : NSObject {
    NSString *_path;
    MFMailboxUid *_mailbox;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    int _fd;
}

+ (void)initialize;
+ (id)legacyJournal;
+ (id)_journalForMailbox:(id)a0;
+ (long long)mergeAllJournalsUsingConnection:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)mergeUsingConnection:(id)a0;
- (int)_processJournalFile:(id)a0 connection:(id)a1;
- (BOOL)_markMailboxForReconciliation:(BOOL)a0 connection:(id)a1;
- (id)initWithMailbox:(id)a0;

@end
