@class NSSet, NSArray, NSMutableSet, NSMutableArray, NSMutableDictionary;
@protocol FFFileReader, FFFileWriter;

@interface FFConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary *configByLevel[2][4];
    NSMutableDictionary *metaByLevel[4];
    NSMutableSet *disclosuresByLevel[4];
}

@property (class, readonly, nonatomic) FFConfiguration *shared;

@property (retain, nonatomic) id<FFFileWriter> filewriter;
@property (retain, nonatomic) id<FFFileReader> filereader;
@property (retain, nonatomic) NSMutableArray *profilePayloads;
@property (readonly, nonatomic) NSSet *domains;

+ (id)configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1;
+ (BOOL)isValidName:(id)a0;
+ (id)_configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1;
+ (id)configurationForTestingWithFileReader:(id)a0;
+ (id)configurationForProfileManagement;
+ (BOOL)isValidDisclosureName:(id)a0;
+ (id)configurationForTestingWithFileWriter:(id)a0;

- (void)loadCombinedDataForLevel:(long long)a0;
- (BOOL)resetDomain:(id)a0 error:(id *)a1;
- (void)enableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (id)fileURLForDomain:(id)a0 pathIndex:(int)a1;
- (id)effectiveStateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)loadAllData;
- (BOOL)reset:(id *)a0;
- (BOOL)writeDisclosureUpdatesAtlevel:(long long)a0 error:(id *)a1;
- (id)mutableDisclosureSetAtLevel:(long long)a0;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 level:(long long)a3;
- (id)disclosureFileURLForLevel:(long long)a0 pathIndex:(int)a1;
- (void)loadDomain:(id)a0 level:(long long)a1;
- (void)clearCachedData;
- (id)defaultStateForFeature:(id)a0 domain:(id)a1;
- (id)currentDisclosures;
- (void)prepareToAddProfilePayloads;
- (void)addDisclosure:(id)a0 atLevel:(long long)a1;
- (BOOL)addProfilePayload:(id)a0 error:(id *)a1;
- (id)initPrivate;
- (void)addFeaturesForDomain:(id)a0 pathIndex:(int)a1 fromURL:(id)a2;
- (void)validateName:(id)a0;
- (BOOL)writeDisclosureUpdates:(id *)a0;
- (void)createMutableDomainConfig:(id)a0 level:(long long)a1;
- (BOOL)isValidName:(id)a0;
- (void)populateDictionary:(id)a0 withFeatures:(id)a1;
- (BOOL)resolvedStateForDisclosure:(id)a0;
- (void)removeDisclosure:(id)a0 atLevel:(long long)a1;
- (BOOL)writeCombinedUpdates:(id *)a0;
- (BOOL)commitProfilePayloadsAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (id)stateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (BOOL)isFeatureHidden:(id)a0 domain:(id)a1;
- (id)featuresForDomain:(id)a0;
- (void)setFeaturesMatchingAttribute:(id)a0 level:(long long)a1 value:(long long)a2;
- (void)unsetFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (BOOL)commitUpdates:(id *)a0;
- (BOOL)writeDomainUpdates:(id *)a0;
- (void)disableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (id)stateForFeature:(id)a0 domain:(id)a1;
- (void)invalidateCache;
- (void)removeAllDisclosuresAtLevel:(long long)a0;
- (void)unsetFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)makeFeatureDictionaryFrom:(id)a0 forDomain:(id)a1;
- (void)loadAllLevelsForDomain:(id)a0;
- (id)currentDisclosuresAtLevel:(long long)a0;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)resolvedStateForFeature:(id)a0 domain:(id)a1;
- (BOOL)isValidDisclosureName:(id)a0;
- (id)fileURLForLevel:(long long)a0 pathIndex:(int)a1;
- (BOOL)writeCombinedUpdatesAtLevel:(long long)a0 error:(id *)a1;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2;

@end
