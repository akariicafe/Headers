@class NSDictionary;

@interface FAEligibilityRequirements : NSObject <NSSecureCoding> {
    NSDictionary *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPropertyRequirements:(id)a0;
- (id)requirementsForPropertyName:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
