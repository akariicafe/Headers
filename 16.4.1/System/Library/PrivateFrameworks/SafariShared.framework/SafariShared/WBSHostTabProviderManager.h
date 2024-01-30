@class NSMapTable;

@interface WBSHostTabProviderManager : NSObject {
    NSMapTable *_providerMapTable;
    NSMapTable *_hostTabMapTable;
}

@property (class, readonly, nonatomic) WBSHostTabProviderManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_hostTabForContentUUID:(id)a0;
- (id)providerForContentUUID:(id)a0;
- (void)registerHostTab:(id)a0;
- (void)unregisterHostTab:(id)a0;

@end
