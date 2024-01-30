@class HDDatabaseTransaction, NSProgress, NSString, NSURL, NSNumber, NSObject;
@protocol OS_dispatch_queue, HDDatabaseJournalDelegate, HDJournalChapter;

@interface HDDatabaseJournal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressLock;
    NSProgress *_progressLock_observableProgress;
    NSProgress *_progressLock_internalProgress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _journalLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeTransactionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interruptionLock;
    HDDatabaseTransaction *_activeMergeTransaction;
    long long _journalStatus;
    BOOL _interrupted;
    BOOL _invalidated;
    NSString *_lastInsertedEntryClassName;
    long long _serializedDataEnumerationThreshold;
    NSURL *_URL;
    id<HDJournalChapter> _currentJournalChapter;
}

@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<HDDatabaseJournalDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;
@property (copy) NSNumber *maximumJournalBytes;
@property (readonly) BOOL isMerging;

- (void)lock;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (void)resumeJournalMerge;
- (void)unlock;
- (BOOL)performMergeTransactionWithProfile:(id)a0 transactionContext:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)mergeWithProfile:(id)a0 shouldContinueHandler:(id /* block */)a1;
- (void)interruptJournalMerge;
- (void)_unitTesting_setSerializedDataEnumerationThreshold:(long long)a0;
- (void)dealloc;
- (id)initWithType:(long long)a0 path:(id)a1;
- (id)progressForJournalMerge;
- (void)_unitTesting_closeCurrentJournalChapter;
- (unsigned long long)sizeOnDisk;
- (id)init;
- (id)description;
- (id)_unitTesting_directoryURL;
- (void)invalidate;
- (long long)journalChapterCount;
- (void).cxx_destruct;
- (BOOL)addJournalEntries:(id)a0 profile:(id)a1 error:(id *)a2;

@end
