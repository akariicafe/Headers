@class NSString, NSDictionary, NSArray, NSNumber;

@interface WLKUserEnvironment : NSObject

@property (nonatomic) unsigned long long protocolVersion;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSString *storeFrontIdentifier;
@property (retain, nonatomic) NSString *languageIdentifier;
@property (retain, nonatomic) NSString *countryIdentifier;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSString *restrictions;
@property (retain, nonatomic) NSArray *consentedBrands;
@property (retain, nonatomic) NSArray *deniedBrands;
@property (nonatomic) BOOL consented;
@property (nonatomic) BOOL internalBuild;
@property (retain, nonatomic) NSString *platform;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_consentQuery;
- (id)_entitlementsQuery;
- (id)_queryParametersV3;
- (id)_queryPostV3;
- (BOOL)isEqualToEnvironment:(id)a0;

@end
