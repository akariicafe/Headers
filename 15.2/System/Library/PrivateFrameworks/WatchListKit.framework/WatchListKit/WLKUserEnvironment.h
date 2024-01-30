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

+ (void)setCurrentEnvironmentForTesting:(id)a0;
+ (id)currentEnvironment;

- (BOOL)isEqualToEnvironment:(id)a0;
- (id)_queryParametersV3;
- (id)_entitlementsQuery;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_queryPostV3;
- (id)_consentQuery;
- (unsigned long long)hash;

@end
