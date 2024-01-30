@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest

@property (nonatomic) long long badgeCount;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
