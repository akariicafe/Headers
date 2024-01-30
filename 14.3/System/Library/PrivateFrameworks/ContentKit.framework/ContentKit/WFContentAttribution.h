@class NSString;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long disclosureLevel;
@property (readonly, nonatomic) unsigned long long managedLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithBundleIdentifier:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)attributionWithAccountBasedBundleIdentifier:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2;
+ (id)attributionWithBundleIdentifier:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 managedLevel:(unsigned long long)a3;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 managedLevel:(unsigned long long)a1;
+ (id)shortcutsAppAttribution;
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)a0;

- (id)localizedDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)attributionIdentifier;
- (id)initWithDisclosureLevel:(unsigned long long)a0 managedLevel:(unsigned long long)a1;

@end
