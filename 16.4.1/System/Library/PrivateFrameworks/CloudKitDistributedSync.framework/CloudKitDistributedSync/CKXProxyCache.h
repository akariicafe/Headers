@class NSMapTable, NSMutableArray;

@interface CKXProxyCache : NSObject

@property (retain, nonatomic) NSMapTable *cachedProxies;
@property (retain, nonatomic) NSMutableArray *scopedProxies;
@property (nonatomic) long long totalProxiesCreated;
@property (nonatomic) long long totalProxiesReclaimed;
@property (nonatomic) long long totalProxiesRetainedOutOfScope;

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_putBackProxyWithoutCheckingScope:(id)a0;
- (id)proxyForClass:(Class)a0 withScope:(long long)a1;
- (void)putBackAllProxiesWithScope:(long long)a0;

@end
