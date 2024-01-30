@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)resetHSTSForHost:(id)a0;
- (id)initPersistentStoreWithURL:(id)a0;
- (void)dealloc;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (id)nonPreloadedHosts;
- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (id)initInMemoryStore;

@end
