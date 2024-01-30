@class NSString, NSMutableDictionary;

@interface HDDatabaseValueCache : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_cache;
    NSString *_threadLocalKey;
    long long _cacheScope;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct { long long faultCount; long long lookupCount; long long resetCount; } _statistics;
}

@property (readonly) struct { long long x0; long long x1; long long x2; } statistics;
@property (readonly, copy) NSString *name;
@property (readonly) long long cacheScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (id)initWithName:(id)a0;
- (id)objectForKey:(id)a0;
- (id)fetchObjectForKey:(id)a0 transaction:(id)a1 error:(id *)a2 faultHandler:(id /* block */)a3;
- (void)removeObjectForKey:(id)a0 transaction:(id)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1 transaction:(id)a2;
- (id)init;
- (id)initWithName:(id)a0 cacheScope:(long long)a1;
- (void)removeAllObjectsWithTransaction:(id)a0;
- (void).cxx_destruct;

@end
