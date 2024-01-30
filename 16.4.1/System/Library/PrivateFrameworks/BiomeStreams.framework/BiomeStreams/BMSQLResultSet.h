@class NSString, NSArray, NSDictionary, NSError, BMSQLDatabase;

@interface BMSQLResultSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _finished;
    unsigned long long _cursor;
    NSArray *_columns;
}

@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) BMSQLDatabase *database;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSDictionary *row;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)new;

- (BOOL)next;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 error:(id)a1 database:(id)a2;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 database:(id)a1;

@end
