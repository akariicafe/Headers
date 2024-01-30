@class NSArray, PKOSVersionRequirementRange;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) PKOSVersionRequirementRange *ownerSharingOSVersionRequirement;
@property (readonly, nonatomic) PKOSVersionRequirementRange *friendSharingOSVersionRequirement;
@property (readonly, copy, nonatomic) NSArray *supportedTerminals;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (id)localizedNameForIssuerWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
