@class NSDictionary, EFSQLPreparedStatement;

@interface EFSQLRow : NSObject

@property (readonly, nonatomic) struct sqlite3_stmt { } *statement;
@property (retain, nonatomic) EFSQLPreparedStatement *preparedStatement;
@property (readonly, nonatomic) NSDictionary *columns;
@property (nonatomic) BOOL namedColumnsInitialized;
@property (nonatomic) unsigned long long columnCount;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)columnNames;
- (BOOL)columnExistsAtIndex:(unsigned long long)a0;
- (id)_queryString;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0;
- (id)initWithPreparedStatement:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithColumns:(id)a0;
- (id)debugDescription;
- (BOOL)columnExistsWithName:(id)a0;

@end
