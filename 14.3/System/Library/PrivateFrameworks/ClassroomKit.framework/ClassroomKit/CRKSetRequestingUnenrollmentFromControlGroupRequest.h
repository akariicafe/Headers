@class DMFControlGroupIdentifier;

@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) BOOL requestingUnenroll;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
