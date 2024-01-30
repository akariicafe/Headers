@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)columnNameIndexMap;
- (BOOL)hasAtLeastOneRow;
- (id)stringValueForFirstRowAndColumn;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (id)objectForFirstRowAndColumn;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (id)rows;
- (void).cxx_destruct;
- (id)objectsInColumn:(unsigned long long)a0;
- (id)init;
- (id)_statement;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (unsigned long long)indexForColumnName:(id)a0;
- (long long)int64ValueForFirstRowAndColumn;

@end
