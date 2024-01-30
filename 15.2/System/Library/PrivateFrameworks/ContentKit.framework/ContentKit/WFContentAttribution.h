@class NSOrderedSet, WFContentDestination, NSString;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long disclosureLevel;
@property (readonly, nonatomic) WFContentDestination *origin;
@property (readonly, nonatomic) NSOrderedSet *privateItemIdentifiers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifiers:(id)a2;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifiers:(id)a2 count:(unsigned long long)a3;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifier:(id)a2;
+ (id)shortcutsAppAttribution;
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)a0;
+ (id)attributionWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionWithAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 managedLevel:(unsigned long long)a3;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)attributionByReplacingAccountWithAppOrigin;
- (id)initWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifiers:(id)a2 count:(unsigned long long)a3;

@end
