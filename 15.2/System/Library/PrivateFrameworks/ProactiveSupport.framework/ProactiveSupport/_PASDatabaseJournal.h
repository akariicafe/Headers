@class NSString, _PASDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface _PASDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) BOOL journaling;

+ (id)journalForInMemoryDb;
+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)_journalPathForDbPath:(id)a0;
+ (id)journalWithDbPath:(id)a0;

- (BOOL)startJournaling;
- (BOOL)stopJournaling;
- (id)_getCurrentFile;
- (id)directoryPath;
- (id)description;
- (void).cxx_destruct;
- (void)_addCurrentFileToLog;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (void)_closeCurrentFile;
- (BOOL)executeQueriesOnDatabase:(id)a0;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2;
- (void)_clearCurrentFile;
- (BOOL)_executeNextRecordFromFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2 deleteFile:(BOOL *)a3;

@end
