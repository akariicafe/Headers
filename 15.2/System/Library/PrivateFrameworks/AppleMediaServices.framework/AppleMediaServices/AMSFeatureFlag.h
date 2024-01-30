@class NSString, NSDictionary, NSArray;

@interface AMSFeatureFlag : NSObject

@property (copy, nonatomic) NSString *ITFE;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSDictionary *flagData;
@property (copy, nonatomic) NSString *associatedGroup;
@property (nonatomic, getter=isCodeComplete) BOOL codeComplete;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *featureDescription;
@property (copy, nonatomic) NSString *flagGroup;
@property (retain, nonatomic) NSArray *itfes;
@property (nonatomic, getter=isTestable) BOOL testable;
@property (nonatomic, getter=isUserEnabled) BOOL userEnabled;
@property (nonatomic, getter=isRemote) BOOL remote;

+ (id)flagForFeature:(id)a0 domain:(id)a1;
+ (id)flagForFeature:(id)a0 domain:(id)a1 searchDirectory:(id)a2;
+ (void)enableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (void)disableFlagForFeature:(id)a0 domain:(id)a1 error:(id *)a2;
+ (id)allFlagGroups;
+ (id)flagGroupWithName:(id)a0;
+ (void)enableFlagGroup:(id)a0 error:(id *)a1;
+ (void)disableFlagGroup:(id)a0 error:(id *)a1;

- (BOOL)hasITFEs;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_activateFlag;
- (id)itfesFromString:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2;
- (void)_updateInternalEnabledState;
- (void)_disableITFEs;
- (void)activateITFEs;
- (id)initWithFlagData:(id)a0 mutableFeatures:(id)a1 profileFeatures:(id)a2 feature:(id)a3 domain:(id)a4;
- (BOOL)hasITFEWithName:(id)a0;
- (unsigned long long)hash;
- (void)_enableITFEs;

@end
