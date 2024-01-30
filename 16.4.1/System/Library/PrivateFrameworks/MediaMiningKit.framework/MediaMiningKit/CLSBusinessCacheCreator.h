@interface CLSBusinessCacheCreator : NSObject

+ (id)enrichedBusinessItemsByMuidsForBusinessItems:(id)a0 progressBlock:(id /* block */)a1;
+ (id)enrichedBusinessItemsByMuidsForMuids:(id)a0 progressBlock:(id /* block */)a1;
+ (id)_resolvedBusinessMUIDs:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;

@end
