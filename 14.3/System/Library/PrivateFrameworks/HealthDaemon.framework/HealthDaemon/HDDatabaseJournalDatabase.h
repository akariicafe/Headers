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

+ (BOOL)_appendData:(id)a0 entryClass:(Class)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)_openDatabase:(id)a0 error:(id *)a1;
+ (unsigned int)_enumerateEntriesInDatabase:(id)a0 anchor:(long long *)a1 enumeratedBytesThreshold:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)_validateOrCreateSchemaForDatabase:(id)a0 error:(id *)a1;
+ (long long)_readSchemaVersionForDatabase:(id)a0 error:(id *)a1;
+ (BOOL)_createSchemaForDatabase:(id)a0 error:(id *)a1;
+ (long long)_getIDForString:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)_insertData:(id)a0 osBuildStringID:(long long)a1 classNameStringID:(long long)a2 database:(id)a3 error:(id *)a4;
+ (long long)_maxEntryAnchorInDatabase:(id)a0 error:(id *)a1;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (BOOL)openForReadingWithError:(id *)a0;
- (unsigned int)readVersionWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;
- (BOOL)createAndOpenForWritingWithError:(id *)a0;
- (BOOL)canAppendData:(id)a0;
- (BOOL)appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (BOOL)flushDataToDisk:(id *)a0;
- (unsigned int)enumerateEntriesWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)_getIdentifierAndCreationDate:(id *)a0 error:(id *)a1;
- (void)_faultCachedProperties;
- (void)_clearCachedProperties;
- (void)_createDatabaseConnectionWithURL:(id)a0;
- (long long)_hasEmptySchemaWithError:(id *)a0;
- (id)_keyValueDomainForProfile:(id)a0;
- (id)getIdentifierAndCreationDate:(id *)a0 error:(id *)a1;
- (void)unitTesting_setEnumeratedBytesThreshold:(long long)a0;

@end
