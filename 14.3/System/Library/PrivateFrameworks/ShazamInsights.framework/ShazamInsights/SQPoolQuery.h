@interface SQPoolQuery : SQQuery

+ (id)poolsFromServerData:(id)a0 error:(id *)a1;

- (void)fetchPoolsWithCompletionHandler:(id /* block */)a0;
- (void)cachePoolForRegion:(id)a0 date:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchClustersWithPoolID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deletePool:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
