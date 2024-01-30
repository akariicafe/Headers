@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (id)initInMemoryStore;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (void)resetHSTSForHost:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (void)dealloc;
- (id)initPersistentStoreWithURL:(id)a0;
- (id)nonPreloadedHosts;

@end
