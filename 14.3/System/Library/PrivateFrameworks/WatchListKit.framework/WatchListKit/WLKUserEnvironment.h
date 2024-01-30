@class NSString, NSDictionary, NSArray, NSNumber;

@interface WLKUserEnvironment : NSObject

@property (nonatomic) unsigned long long protocolVersion;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSString *storeFrontIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSString *restrictions;
@property (retain, nonatomic) NSArray *consentedBrands;
@property (retain, nonatomic) NSArray *deniedBrands;
@property (nonatomic) BOOL consented;
@property (nonatomic) BOOL internalBuild;
@property (retain, nonatomic) NSString *platform;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_queryParameters;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToEnvironment:(id)a0;
- (id)_entitlementsQuery;
- (id)_consentQuery;

@end
