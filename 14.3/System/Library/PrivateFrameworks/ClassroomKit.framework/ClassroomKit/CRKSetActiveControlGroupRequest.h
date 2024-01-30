@class DMFControlGroupIdentifier;

@interface CRKSetActiveControlGroupRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
