@class NSString, NSMutableDictionary;
@protocol EFSQLValueExpressable;

@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
    NSString *_table;
    unsigned long long _conflictResolution;
}

@property (readonly, copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) id<EFSQLValueExpressable> whereClause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (id)initWithTable:(id)a0 conflictResolution:(unsigned long long)a1;
- (id)objectForKeyedSubscript:(id)a0;

@end
