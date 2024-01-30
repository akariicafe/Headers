@class NSArray, NSDictionary, PKOSVersionRequirementRange;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) PKOSVersionRequirementRange *ownerSharingOSVersionRequirement;
@property (readonly, nonatomic) PKOSVersionRequirementRange *friendSharingOSVersionRequirement;
@property (readonly, copy, nonatomic) NSArray *supportedTerminals;
@property (readonly, copy, nonatomic) NSDictionary *brandIdentifierForBrandCode;

- (id)localizedNameForIssuerWithIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
