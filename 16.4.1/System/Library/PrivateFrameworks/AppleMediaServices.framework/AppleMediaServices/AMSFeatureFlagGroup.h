@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (void)resetAllFlagGroups;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)allFlagGroups;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;

- (id)fetchAllGroupKeys;
- (id)allITFEs;
- (id)flagsForType:(long long)a0;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (id)initWithName:(id)a0;
- (id)_groupKeyForType:(long long)a0;
- (id)initWithName:(id)a0 domain:(id)a1;
- (void)activateITFEs;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (id)_completedFlags;
- (id)completedFlags;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (void)appendFlag:(id)a0;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;
- (id)testableFlags;
- (id)_testableFlags;
- (id)developmentFlags;
- (id)_developmentFlags;
- (id)flagsForDevelopmentPhase:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isGroupTypeEnabled:(long long)a0;

@end
