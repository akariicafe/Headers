@class DMFControlGroupIdentifier, NSArray, NSDate;

@interface DMFJoinControlGroupRequest : DMFTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers;
@property (copy, nonatomic) NSDate *expirationDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
