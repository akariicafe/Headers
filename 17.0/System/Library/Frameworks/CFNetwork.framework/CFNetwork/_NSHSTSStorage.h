@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)dealloc;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (id)initInMemoryStore;
- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (id)initPersistentStoreWithURL:(id)a0;
- (void)resetHSTSForHost:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (id)nonPreloadedHosts;

@end
