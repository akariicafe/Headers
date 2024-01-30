@class HDDatabaseTransaction, NSProgress, NSURL, NSLock;
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
    Class _lastInsertedEntryClass;
}

@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSLock *journalLock;
@property (retain, nonatomic) id<HDJournalChapter> currentJournalChapter;
@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<HDDatabaseJournalDelegate> delegate;

- (void)unlock;
- (id)_mergeTransactionContextWithContext:(id)a0;
- (void)_mergeJournalEntries:(id)a0 profile:(id)a1;
- (void)lock;
- (id)init;
- (BOOL)_performPostJournalMergeWithVersion:(unsigned int)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (BOOL)mergeWithProfile:(id)a0;
- (id)progressForJournalMerge;
- (void)dealloc;
- (void)_waitIfInterrupted;
- (BOOL)addJournalEntries:(id)a0 profile:(id)a1 error:(id *)a2;
- (void)interruptJournalMerge;
- (unsigned long long)sizeOnDisk;
- (id)_unitTesting_directoryURL;
- (void)_unitTesting_closeCurrentJournalChapter;
- (void)resumeJournalMerge;
- (id)description;
- (BOOL)_setActiveTransactionAndReturnInterrupted:(id)a0;
- (void)_executeAtomically:(id /* block */)a0;
- (long long)journalChapterCount;
- (BOOL)performMergeTransactionWithProfile:(id)a0 transactionContext:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)initWithType:(long long)a0 path:(id)a1;
- (BOOL)_isJournalDatabaseFeatureEnabled;
- (BOOL)_createNextJournalChapterWithError:(id *)a0;
- (BOOL)_appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (void)invalidate;
- (BOOL)_processJournalChaptersWithProfile:(id)a0;
- (unsigned int)_mergeJournalChapter:(id)a0 profile:(id)a1 accessibilityAssertion:(id)a2;

@end
