@interface MapsSync.MapsSyncBatch : NSObject

+ (void)commitWithItems:(id)a0 completion:(id /* block */)a1;
+ (void)deleteWithItems:(id)a0 completion:(id /* block */)a1;
+ (void)mapObjectsByContextWithItems:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;

@end
