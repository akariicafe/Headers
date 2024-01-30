@class NSMutableArray;

@interface PLSQLiteRecorder : NSObject {
    struct sqlite3 { } *_targetDb;
    long long _libraryID;
    BOOL _muted;
    BOOL _isSearch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lastStatements;
    id /* block */ _decorator;
    id /* block */ _entriesHandler;
    int _lastObservedPagesHit;
    int _lastObservedPagesMissed;
}

+ (id)queryPlanFromSQL:(const char *)a0 usingDb:(struct sqlite3 { } *)a1;

- (id)initWithEntryDecorator:(id /* block */)a0 entriesAvailableHandler:(id /* block */)a1;
- (id)recordedStatementsAndReset;
- (BOOL)startRecordingSqliteDb:(struct sqlite3 { } *)a0;
- (BOOL)stopRecording;
- (void).cxx_destruct;
- (id)init;
- (id)_recordedStatementsAndReset:(BOOL)a0;
- (id)recordedStatements;

@end
