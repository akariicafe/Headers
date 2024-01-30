@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (id)initPersistentStoreWithURL:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (id)initInMemoryStore;
- (id)nonPreloadedHosts;
- (void)resetHSTSForHost:(id)a0;
- (void)dealloc;

@end
