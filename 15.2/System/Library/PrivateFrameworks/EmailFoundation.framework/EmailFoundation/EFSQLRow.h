@class NSDictionary, EFSQLPreparedStatement;

@interface EFSQLRow : NSObject

@property (readonly, nonatomic) struct sqlite3_stmt { } *statement;
@property (retain, nonatomic) EFSQLPreparedStatement *preparedStatement;
@property (readonly, nonatomic) NSDictionary *columns;
@property (nonatomic) BOOL namedColumnsInitialized;
@property (nonatomic) unsigned long long columnCount;

- (id)columnNames;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0;
- (BOOL)columnExistsWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreparedStatement:(id)a0;
- (BOOL)columnExistsAtIndex:(unsigned long long)a0;
- (id)_queryString;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithColumns:(id)a0;

@end
