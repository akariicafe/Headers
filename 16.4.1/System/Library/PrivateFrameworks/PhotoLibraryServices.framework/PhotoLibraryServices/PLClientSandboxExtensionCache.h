@class NSMutableOrderedSet;

@interface PLClientSandboxExtensionCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableOrderedSet *sandboxExtensionURLs;
@property (readonly, nonatomic) unsigned long long cacheLimit;

- (void).cxx_destruct;
- (id)initWithCacheLimit:(unsigned long long)a0;
- (BOOL)containsURL:(id)a0;
- (void)insertSandboxedURL:(id)a0;

@end
