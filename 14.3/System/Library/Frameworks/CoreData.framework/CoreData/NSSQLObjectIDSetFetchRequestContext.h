@class NSArray, NSString;

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {
    NSArray *_idSets;
    NSString *_columnName;
}

- (void)executeEpilogue;
- (void)dealloc;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2 idSets:(id)a3 columnName:(id)a4;
- (BOOL)executeRequestCore:(id *)a0;

@end
