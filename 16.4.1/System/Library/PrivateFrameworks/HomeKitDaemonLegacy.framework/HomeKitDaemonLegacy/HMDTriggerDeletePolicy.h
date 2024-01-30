@interface HMDTriggerDeletePolicy : HMDTriggerPolicy

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)applyPolicy:(id)a0;

@end
