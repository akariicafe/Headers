@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject {
    NSDictionary *_tablesByName;
}

@property (readonly, copy, nonatomic) NSArray *tables;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTables:(id)a0;
- (id)definitionWithDatabaseName:(id)a0 includeIndexes:(BOOL)a1;
- (id)definitionWithDatabaseName:(id)a0;
- (id)indexDefinitionsWithDatabaseName:(id)a0;
- (id)tableForName:(id)a0;

@end
