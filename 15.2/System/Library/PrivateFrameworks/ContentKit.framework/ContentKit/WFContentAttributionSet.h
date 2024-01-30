@class NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) unsigned long long derivedDisclosureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionSetByMergingAttributionSets:(id)a0;
+ (id)attributionSetWithAttributions:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)a0;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)attributionSetWithAccountBasedAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 originalItemIdentifier:(id)a3;
+ (id)shortcutsAppAttributionSet;
+ (id)combiningAttributions:(id)a0 withAttributions:(id)a1;
+ (id)compactAttributionsFrom:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)reducedAttributionsFrom:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id)wfSerializedRepresentation;
- (id)attributionSetByReplacingAccountWithAppOrigins;
- (BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)a0;
- (BOOL)isSupersetOfAttributionSet:(id)a0;
- (BOOL)isMoreRestrictiveThan:(id)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0 usingManagedConfigurationManager:(id)a1;
- (unsigned long long)derivedManagedLevel;
- (id)allOrigins;
- (id)initWithAttributions:(id)a0;

@end
