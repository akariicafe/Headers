@class DMFControlGroupIdentifier, NSString, NSDictionary;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSDictionary *studentInformation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
