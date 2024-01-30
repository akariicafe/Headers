@class NSDictionary, NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *wfSerializedRepresentationWithPrivateItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) unsigned long long derivedDisclosureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionSetWithAttributions:(id)a0;
+ (id)attributionSetByMergingAttributionSets:(id)a0;
+ (id)attributionSetWithAttributions:(id)a0 shouldReduceAttributions:(BOOL)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)a0;
+ (id)attributionSetWithAccountBasedAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 originalItemIdentifier:(id)a3;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 disclosureWarnings:(id)a2 originalItemIdentifier:(id)a3;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)combiningAttributions:(id)a0 withAttributions:(id)a1;
+ (id)compactAttributionsFrom:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)reducedAttributionsFrom:(id)a0;
+ (id)shortcutsAppAttributionSet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)initWithAttribution:(id)a0;
- (id)attributionSetByReplacingAccountWithAppOrigins;
- (BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)a0;
- (id)allOrigins;
- (id)attributionSetByFilteringNeighborsOfContentItem:(id)a0;
- (unsigned long long)derivedManagedLevel;
- (id)initWithAttributions:(id)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0 usingManagedConfigurationManager:(id)a1;
- (BOOL)isMoreRestrictiveThan:(id)a0;
- (BOOL)isSupersetOfAttributionSet:(id)a0;

@end
