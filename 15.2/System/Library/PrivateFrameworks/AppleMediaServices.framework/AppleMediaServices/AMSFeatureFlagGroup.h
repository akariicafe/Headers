@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (id)allFlagGroups;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (void)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (void)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (void)resetAllFlagGroups;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (void)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)appendFlag:(id)a0;
- (void)activateITFEs;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (id)flagsForType:(long long)a0;
- (id)fetchAllGroupKeys;
- (id)_groupKeyForType:(long long)a0;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (id)_testableFlags;
- (id)_developmentFlags;
- (id)_completedFlags;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (id)initWithName:(id)a0 domain:(id)a1;
- (id)testableFlags;
- (id)developmentFlags;
- (id)completedFlags;
- (void)reset;

@end
