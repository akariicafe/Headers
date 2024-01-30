@class NSDate, NSString, NSURL, HDKeyValueDomain, HDSQLiteDatabase, NSNumber;

@interface HDDatabaseJournalDatabase : NSObject <HDJournalChapter> {
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
    NSNumber *_size;
    NSDate *_modificationDate;
    HDKeyValueDomain *_keyValueDomain;
    long long _enumeratedBytesThreshold;
}

@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;
@property (retain, nonatomic) HDKeyValueDomain *unitTesting_keyValueDomainOverride;
@property (copy, nonatomic) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *journalPath;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) double modificationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)openForReadingWithError:(id *)a0;
- (void)dealloc;
- (unsigned int)readVersionWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;
- (BOOL)createAndOpenForWritingWithError:(id *)a0;
- (BOOL)canAppendData:(id)a0;
- (BOOL)appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (BOOL)flushDataToDisk:(id *)a0;
- (unsigned int)enumerateEntriesWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)getIdentifierAndCreationDate:(id *)a0 error:(id *)a1;
- (void)unitTesting_setEnumeratedBytesThreshold:(long long)a0;

@end
