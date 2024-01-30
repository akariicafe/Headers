@class NSMutableDictionary;

@interface KGGraphUniverse : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *databaseByURL;

+ (void)initialize;
+ (id)instance;
+ (id)managerForGraphStoreAtURL:(id)a0;
+ (BOOL)swapDatabaseFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (void)closeDatabaseAtURL:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)managerForGraphStoreAtURL:(id)a0;
- (BOOL)swapDatabaseFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (void)removeDatabaseByURL:(id)a0;
- (void)closeDatabaseAtURL:(id)a0 completion:(id /* block */)a1;

@end
