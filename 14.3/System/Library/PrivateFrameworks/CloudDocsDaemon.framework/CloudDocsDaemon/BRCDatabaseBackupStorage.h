@class NSURL, PQLConnection, NSArray;

@interface BRCDatabaseBackupStorage : NSObject

@property (retain, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) PQLConnection *database;
@property (retain, nonatomic) NSArray *urlPropertiesToFetch;
@property (retain, nonatomic) NSURL *attachedDatabaseURL;

- (BOOL)addRecord:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (void)flushAndClose;
- (BOOL)setUpDatabaseWithError:(id *)a0;
- (id)backupManifestEnumerator:(id)a0;
- (void)populateNewColumnsInDatabase:(id)a0 forRecord:(id)a1 basePath:(id)a2;
- (id)docIDForURL:(id)a0;
- (BOOL)setForeignKeys:(id)a0 enabled:(BOOL)a1;
- (BOOL)negateIDs:(id)a0;
- (BOOL)updateIDs:(id)a0;
- (BOOL)clearStagedIDs:(id)a0;
- (BOOL)fixUpBackupDetector:(id)a0;
- (BOOL)fixUpClientState:(id)a0;
- (void)populateNewColumnsWithBasePath:(id)a0;
- (BOOL)attachDatabase:(id)a0 error:(id *)a1;
- (BOOL)updateAttachedDatabase;

@end
