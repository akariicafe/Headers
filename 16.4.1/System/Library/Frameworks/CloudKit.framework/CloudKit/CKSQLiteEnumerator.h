@class NSArray, CKSQLite, NSString, NSMutableArray;

@interface CKSQLiteEnumerator : NSEnumerator {
    CKSQLite *_database;
    NSArray *_columns;
    NSString *_tableName;
    NSString *_whereSQL;
    NSArray *_bindings;
    NSArray *_orderBy;
    NSMutableArray *_objects;
    unsigned long long _index;
    unsigned long long _fetchOffset;
}

@property (copy, nonatomic) id /* block */ objectTranslator;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 columns:(id)a1 from:(id)a2 where:(id)a3 bindings:(id)a4 orderBy:(id)a5;

@end
