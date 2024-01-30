@class NSString, SGDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface SGDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    SGDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) BOOL journaling;

+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)journalForInMemoryDb;
+ (id)_allowedTypesForQueryKeyedArchives;
+ (id)journalWithName:(id)a0;

- (void)_clearCurrentFile;
- (BOOL)stopJournaling;
- (void).cxx_destruct;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (id)_getCurrentFile;
- (void)_addCurrentFileToLog;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)startJournaling;
- (BOOL)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2;
- (void)_closeCurrentFile;
- (BOOL)executeQueriesOnDatabase:(id)a0;

@end
