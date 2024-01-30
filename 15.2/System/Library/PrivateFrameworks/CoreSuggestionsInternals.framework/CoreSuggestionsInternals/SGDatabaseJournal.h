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

+ (id)journalWithName:(id)a0;
+ (id)journalForInMemoryDb;
+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)_allowedTypesForQueryKeyedArchives;

- (BOOL)startJournaling;
- (BOOL)stopJournaling;
- (id)_getCurrentFile;
- (void).cxx_destruct;
- (void)_addCurrentFileToLog;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (void)_closeCurrentFile;
- (BOOL)executeQueriesOnDatabase:(id)a0;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2;
- (void)_clearCurrentFile;

@end
