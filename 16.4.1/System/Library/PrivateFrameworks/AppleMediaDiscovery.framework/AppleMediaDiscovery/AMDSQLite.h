@class NSError, NSObject, AMDSQLiteSchema;
@protocol OS_dispatch_queue;

@interface AMDSQLite : NSObject

@property (retain, nonatomic) AMDSQLiteSchema *_bootstrapSchema;
@property (nonatomic) struct sqlite3 { } *_db;
@property (retain, nonatomic) NSError *_error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_executorQueue;
@property (nonatomic) BOOL _isEnabled;
@property (retain, nonatomic) AMDSQLiteSchema *_schema;

+ (id)getDomainsFrom:(id)a0;
+ (id)getSharedInstance;
+ (id)saveEvents:(id)a0 error:(id *)a1;
+ (id)loadNewData:(id)a0;
+ (id)getFeatureValueWithName:(id)a0 inDomain:(id)a1 withColumnName:(id)a2 skipRowset:(BOOL)a3 error:(id *)a4;
+ (id)refreshEntityTableForDomain:(id)a0 error:(id *)a1;
+ (id)clearUserData:(id)a0;
+ (id)updateData:(id)a0;
+ (id)truncateEvents:(id *)a0;
+ (id)getSharedInstanceWithOption:(BOOL)a0;
+ (id)refreshODTPForDomain:(id)a0 error:(id *)a1;
+ (id)deleteEventsWithPredicate:(id)a0 forStreams:(id)a1;
+ (id)deleteEventsOlderThan:(unsigned int)a0;
+ (id)getBootstrapSchemaDict;

- (id)refreshAppsTable:(id *)a0;
- (BOOL)isUsable;
- (id)connectionState;
- (id)createTable:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)applySchema:(id)a0 error:(id *)a1;
- (struct sqlite3_stmt { } *)prepare:(id)a0 error:(id *)a1;
- (void)setEnable:(BOOL)a0;
- (id)deleteRowsInternal:(id)a0 error:(id *)a1;
- (id)loadSchema;
- (struct sqlite3 { } *)getDb;
- (id)bootstrapDb;
- (id)fetchRowsUsingSchema:(id)a0 andDescriptor:(id)a1 andPersist:(BOOL)a2 error:(id *)a3;
- (id)loadDb;
- (id)getError;
- (id)validateRowsData:(id)a0 tableSchema:(id)a1 error:(id *)a2;
- (id)updateSchema:(id)a0 error:(id *)a1;
- (id)prepareBootstrapSchema;
- (id)insertRows:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)getSchema;
- (id)getBootSchema;
- (id)fetchRows:(id)a0 andPersist:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)saveSchema:(id)a0 error:(id *)a1;
- (id)deleteRows:(id)a0 error:(id *)a1;

@end
