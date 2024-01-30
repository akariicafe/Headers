@class NSString;

@interface WFContentAppAttribution : WFContentAttribution

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

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
- (id)initWithBundleIdentifier:(id)a0 disclosureLevel:(unsigned long long)a1 managedLevel:(unsigned long long)a2;

@end
