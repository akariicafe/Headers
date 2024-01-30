@class NSMutableArray, NSString, NSDictionary, SSXPCConnection, NSObject, SSURLBagContext;
@protocol OS_dispatch_queue;

@interface SSURLBag : NSObject {
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _expirationTime;
    BOOL _ignoreCacheForNextLookup;
    NSMutableArray *_pendingLookups;
}

@property (readonly) NSDictionary *existingBagDictionary;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) SSURLBagContext *URLBagContext;

+ (id)URLBagForContext:(id)a0;
+ (void)setURLBag:(id)a0 forContext:(id)a1;

- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (id)initWithURLBagContext:(id)a0;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (id)_connection;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)init;
- (void)getTrustForURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidate;
- (void)_loadURLBag;
- (void)_loadWithCompletionBlock:(id /* block */)a0;
- (void)_drainPendingLookupsWithError:(id)a0;
- (void)dealloc;

@end
