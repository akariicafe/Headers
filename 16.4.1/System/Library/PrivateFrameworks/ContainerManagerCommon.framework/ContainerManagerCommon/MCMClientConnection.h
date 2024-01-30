@protocol MCMContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMContext> context;

+ (id)sharedClientConnection;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (id)clientBundleIdentifier;
- (void)_cleanupOprhanedCodeSigningMappingData;
- (void)_regenerateAllSystemContainerPaths;
- (void)containerManagerSetup;
- (id)initWithContext:(id)a0;
- (void)rebootContainerManagerSetup;
- (id)init;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;

@end
