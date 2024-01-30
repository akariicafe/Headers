@interface HMDTriggerDeleteAfterExecutionPolicy : HMDTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)applyPolicy:(id)a0;

@end
