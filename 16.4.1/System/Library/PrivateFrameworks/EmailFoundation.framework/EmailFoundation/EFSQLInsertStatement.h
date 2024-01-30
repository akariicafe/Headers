@class NSString, NSMutableArray, NSMutableOrderedSet;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue> {
    NSString *_table;
    unsigned long long _conflictResolution;
    NSMutableArray *_values;
    NSMutableOrderedSet *_requiredColumns;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKeyedSubscript:(id)a0;
- (void)renderStatementWithNamedBindingsInto:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithTable:(id)a0;
- (void)enumerateBindingIndicesAndValuesUsingBlock:(id /* block */)a0;
- (id)addValue;
- (id)initWithTable:(id)a0 conflictResolution:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)a0;

@end
