@class NSString;

@interface AMSFeatureFlag : NSObject

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *featureDescription;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *ITFE;
@property (copy, nonatomic) NSString *flagGroup;
@property (nonatomic, getter=isTestable) BOOL testable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled;
@property (nonatomic, getter=isUserEnabled) BOOL userEnabled;

+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (id)flagForFeature:(id)a0 domain:(id)a1;
+ (void)addNewITFEFeaturesWithNames:(id)a0;
+ (void)setNonProfileITFEFeatureName:(id)a0 toValue:(id)a1;
+ (id)allFlagGroups;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (void)setFlagGroup:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (id)fetchProfileITFEFeatures;
+ (id)fetchITFEFeatures;
+ (void)enableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (void)disableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (id)flagGroupWithName:(id)a0;
+ (void)enableFlagGroup:(id)a0 error:(id *)a1;
+ (void)disableFlagGroup:(id)a0 error:(id *)a1;

- (void).cxx_destruct;

@end
