@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest

@property (nonatomic) long long badgeCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
