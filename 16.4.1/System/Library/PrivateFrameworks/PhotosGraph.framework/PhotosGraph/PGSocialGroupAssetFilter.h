@class NSString;

@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter>

@property (class, readonly, nonatomic) NSString *name;

@property (readonly, nonatomic) double minimumRatioOfFacesComingFromSocialGroup;
@property (readonly, nonatomic) double minimumRatioOfPersonsInSocialGroupPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)criteriaWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)asset:(id)a0 passesForPersonLocalIdentifiersInSocialGroup:(id)a1;
- (id)filteredAssetsFromAssets:(id)a0 withPersonLocalIdentifiersInSocialGroup:(id)a1;

@end
