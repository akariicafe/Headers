@class NSString;

@interface WFContentAccountAttribution : WFContentAttribution

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)localizedDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)attributionIdentifier;
- (id)initWithBundleIdentifier:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 managedLevel:(unsigned long long)a3;

@end
