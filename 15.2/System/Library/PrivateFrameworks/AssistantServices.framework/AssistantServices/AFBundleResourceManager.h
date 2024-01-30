@class NSMutableDictionary;

@interface AFBundleResourceManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_resourceURLProvidersByIdentifier;
}

+ (id)sharedManager;

- (id)resourceForSoundID:(long long)a0;
- (id)URLForSoundID:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)URLForResource:(id)a0;

@end
