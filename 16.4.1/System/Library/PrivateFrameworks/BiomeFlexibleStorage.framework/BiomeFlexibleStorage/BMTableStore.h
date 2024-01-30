@class NSArray, NSString, _bmFMDatabase, NSURL;

@interface BMTableStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSArray *classArray;
@property (readonly, nonatomic) NSString *sqlReplace;
@property (readonly, nonatomic) _bmFMDatabase *db;
@property (readonly, nonatomic) NSURL *dbURL;
@property (readonly, nonatomic) NSString *tableName;

- (id)initWithURL:(id)a0;
- (BOOL)closeDB;
- (void).cxx_destruct;
- (BOOL)addTable:(id)a0 named:(id)a1 error:(id *)a2;
- (BOOL)openDB;
- (id)selectTableNamed:(id)a0 error:(id *)a1;
- (BOOL)upsertRows:(id)a0 error:(id *)a1;
- (BOOL)setupClassArray:(id)a0 table:(id)a1 named:(id)a2 error:(id *)a3;

@end
