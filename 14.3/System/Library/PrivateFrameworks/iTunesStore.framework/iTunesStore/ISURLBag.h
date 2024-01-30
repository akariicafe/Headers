@class NSArray, NSString, NSDictionary, NSSet, SSNetworkConstraints, ISURLBagBackend, SSURLBagContext;

@interface ISURLBag : NSObject {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    ISURLBagBackend *_bagBackend;
    NSString *_bagBackendKey;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) double invalidationTime;
@property (nonatomic) BOOL loadedFromDiskCache;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly, nonatomic) long long versionIdentifier;
@property (readonly) NSSet *availableStorefrontItemKinds;

+ (id)storeFrontURLBagKeyForItemKind:(id)a0;
+ (id)_sharedBagBackend;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)copyExtraHeadersForURL:(id)a0 inBagContext:(id)a1;
+ (id)networkConstraintsForDownloadKind:(id)a0 inBagContext:(id)a1;
+ (BOOL)shouldSendGUIDForURL:(id)a0 inBagContext:(id)a1;
+ (id)urlBagForContext:(id)a0;
+ (id)urlForKey:(id)a0 inBagContext:(id)a1;
+ (BOOL)urlIsTrusted:(id)a0 inBagContext:(id)a1;
+ (id)valueForKey:(id)a0 inBagContext:(id)a1;

- (BOOL)loadFromDictionary:(id)a0 returningError:(id *)a1;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)_writeURLResolutionCacheFile;
- (id)networkConstraintsForDownloadKind:(id)a0;
- (BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)a0;
- (void)_toggleStopSendingLocalCookies;
- (id)URLForURL:(id)a0 clientIdentifier:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithURLBagContext:(id)a0;
- (void)_writeNetworkConstraintsCacheFile;
- (id)_copyGUIDSchemesFromBagBackend;
- (void)_setBagBackendWithDictionary:(id)a0;
- (BOOL)urlIsTrusted:(id)a0;
- (id)_copyGUIDPatternsFromBagBackend;
- (id)_copyHeaderPatternsFromBagBackend;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)copyExtraHeadersForURL:(id)a0;
- (BOOL)shouldSendGUIDForURL:(id)a0;
- (id)urlForKey:(id)a0;
- (void)setInvalidationTimeWithExprationInterval:(double)a0;
- (id)searchQueryParametersForClientIdentifier:(id)a0 networkType:(long long)a1;
- (void)_preprocessURLResolutionCacheDictionary:(id)a0;
- (id)_networkConstraintsCachePath;
- (id)initWithRawDictionary:(id)a0;
- (id)sanitizedURLForURL:(id)a0;

@end
