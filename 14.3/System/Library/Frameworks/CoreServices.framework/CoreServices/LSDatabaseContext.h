@class NSData;

@interface LSDatabaseContext : NSObject

@property (class, readonly) LSDatabaseContext *sharedDatabaseContext;

@property (readonly, getter=isAccessing) BOOL accessing;
@property (readonly) NSData *currentPersistentIdentifier;

+ (id)new;

- (void)stopAccessing;
- (id)addDatabaseChangeObserver4WebKit:(id /* block */)a0;
- (BOOL)startAccessingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)removeDatabaseChangeObserver4WebKit:(id)a0;
- (void)accessWithUserID:(unsigned int)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)accessWithUserID:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (void)accessUsingBlock:(id /* block */)a0;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 error:(id *)a1;
- (BOOL)startAccessingReturningError:(id *)a0;
- (id)init;
- (void)observeDatabaseChange4WebKit:(id)a0;
- (void)accessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_init;

@end
