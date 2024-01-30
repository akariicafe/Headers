@class CRKCourseInvitation;

@interface CRKInviteToCourseRequest : CATTaskRequest

@property (retain, nonatomic) CRKCourseInvitation *invitation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
