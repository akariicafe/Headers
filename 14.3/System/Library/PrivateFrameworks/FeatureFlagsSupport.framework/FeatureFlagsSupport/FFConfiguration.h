@class NSSet, NSArray, NSMutableSet, NSMutableDictionary;

@interface FFConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary *configByLevel[2][4];
    NSMutableDictionary *metaByLevel[4];
}

@property (class, readonly, nonatomic) FFConfiguration *shared;

@property (readonly, nonatomic) NSSet *domains;

- (void)invalidateCache;
- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)reset:(id *)a0;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)stateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)stateForFeature:(id)a0 domain:(id)a1;
- (BOOL)commitUpdates:(id *)a0;
- (void)clearCachedData;
- (void)validateName:(id)a0;
- (BOOL)isValidName:(id)a0;
- (id)fileURLForLevel:(long long)a0 pathIndex:(int)a1;
- (id)makeFeatureDictionaryFrom:(id)a0 forDomain:(id)a1;
- (id)fileURLForDomain:(id)a0 pathIndex:(int)a1;
- (void)addFeaturesForDomain:(id)a0 pathIndex:(int)a1 fromURL:(id)a2;
- (void)loadCombinedDataForLevel:(long long)a0;
- (void)loadDomain:(id)a0 level:(long long)a1;
- (id)effectiveStateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)createMutableDomainConfig:(id)a0 level:(long long)a1;
- (void)loadAllData;
- (BOOL)isFeatureHidden:(id)a0 domain:(id)a1;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 level:(long long)a3;
- (BOOL)createDirectoryAtURL:(id)a0 error:(id *)a1;
- (void)populateDictionary:(id)a0 withFeatures:(id)a1;
- (BOOL)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;
- (void)loadAllLevelsForDomain:(id)a0;
- (id)resolvedStateForFeature:(id)a0 domain:(id)a1;
- (void)setFeaturesMatchingAttribute:(id)a0 level:(long long)a1 value:(long long)a2;
- (BOOL)writeDomainUpdates:(id *)a0;
- (BOOL)writeCombinedUpdates:(id *)a0;
- (id)featuresForDomain:(id)a0;
- (id)defaultStateForFeature:(id)a0 domain:(id)a1;
- (void)enableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)disableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)unsetFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)unsetFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (BOOL)resetDomain:(id)a0 error:(id *)a1;

@end
