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
+ (id)attributionSetWithBundleIdentifier:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)attributionSetWithDisclosureLevel:(unsigned long long)a0 managedLevel:(unsigned long long)a1;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)a0;
+ (id)attributionSetWithAccountBasedBundleIdentifier:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2;
+ (id)attributionSetWithBundleIdentifier:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 managedLevel:(unsigned long long)a3;
+ (id)attributionSetWithAttributions:(id)a0;
+ (id)shortcutsAppAttributionSet;
+ (id)combiningAttributions:(id)a0 withAttributions:(id)a1;
+ (id)reducedAttributionsFrom:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id)wfSerializedRepresentation;
- (BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)a0;
- (BOOL)isSupersetOfAttributionSet:(id)a0;
- (BOOL)isMoreRestrictiveThan:(id)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0 usingManagedConfigurationManager:(id)a1;
- (id)attributionSetByAddingAttribution:(id)a0;
- (id)initWithAttributions:(id)a0;

@end
