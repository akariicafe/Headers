@class NSLock, NSMutableDictionary;

@interface REAppNameCache : RESingleton {
    NSMutableDictionary *_nameCache;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)_init;
- (id)localizedNameForApplicationWithIdentifier:(id)a0;

@end
