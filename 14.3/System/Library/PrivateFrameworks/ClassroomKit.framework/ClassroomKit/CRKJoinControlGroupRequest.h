@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) CRKCourseInvitation *invitation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
