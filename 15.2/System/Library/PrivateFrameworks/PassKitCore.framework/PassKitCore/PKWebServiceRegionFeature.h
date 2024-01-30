@class NSString, PKOSVersionRequirementRange;

@interface PKWebServiceRegionFeature : NSObject

@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) long long registrationType;
@property (readonly, nonatomic) float enablementThreshold;
@property (readonly, nonatomic) BOOL automaticRegister;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

+ (id)regionFeatureWithType:(long long)a0 dictionary:(id)a1 region:(id)a2;

- (void).cxx_destruct;
- (id)initWithFeatureType:(long long)a0 dictionary:(id)a1 region:(id)a2;

@end
