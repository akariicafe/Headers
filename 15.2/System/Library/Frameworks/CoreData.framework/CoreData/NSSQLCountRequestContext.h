@interface NSSQLCountRequestContext : NSSQLFetchRequestContext

- (id)_createStatement;
- (BOOL)executeRequestCore:(id *)a0;

@end
