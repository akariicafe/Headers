@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest

@property (nonatomic) BOOL ignoresDeviceIdleState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
