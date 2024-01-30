@class NSString;

@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter>

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minimumRatioOfFacesComingFromSocialGroup;
@property (readonly, nonatomic) double minimumRatioOfPersonsInSocialGroupPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)filteredAssetsFromAssets:(id)a0 withPersonLocalIdentifiersInSocialGroup:(id)a1;
- (BOOL)asset:(id)a0 passesForPersonLocalIdentifiersInSocialGroup:(id)a1;

@end
