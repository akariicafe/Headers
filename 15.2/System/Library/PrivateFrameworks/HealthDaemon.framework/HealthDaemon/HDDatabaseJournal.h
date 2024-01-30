@class HDDatabaseTransaction, NSProgress, NSString, NSURL, NSNumber, NSLock;
@protocol HDJournalChapter, HDDatabaseJournalDelegate;

@interface HDDatabaseJournal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressLock;
    NSProgress *_progressLock_observableProgress;
    NSProgress *_progressLock_internalProgress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeTransactionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interruptionLock;
    HDDatabaseTransaction *_activeMergeTransaction;
    long long _journalStatus;
    BOOL _interrupted;
    BOOL _invalidated;
    NSString *_lastInsertedEntryClassName;
    long long _serializedDataEnumerationThreshold;
    NSURL *_URL;
    NSLock *_journalLock;
    id<HDJournalChapter> _currentJournalChapter;
}

@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<HDDatabaseJournalDelegate> delegate;
@property (copy) NSNumber *maximumJournalBytes;

- (void)_unitTesting_setSerializedDataEnumerationThreshold:(long long)a0;
- (id)_unitTesting_directoryURL;
- (BOOL)addJournalEntries:(id)a0 profile:(id)a1 error:(id *)a2;
- (void)unlock;
- (void)lock;
- (id)progressForJournalMerge;
- (void)interruptJournalMerge;
- (id)description;
- (id)initWithType:(long long)a0 path:(id)a1;
- (BOOL)mergeWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resumeJournalMerge;
- (unsigned long long)sizeOnDisk;
- (void)invalidate;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (BOOL)performMergeTransactionWithProfile:(id)a0 transactionContext:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (void)dealloc;
- (void)_unitTesting_closeCurrentJournalChapter;
- (long long)journalChapterCount;

@end
