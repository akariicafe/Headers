@class NSPredicate;

@interface KCSharingGroupFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)pending;
+ (id)all;
+ (id)groupName:(id)a0;
+ (id)predicateMatchingAllGroups;
+ (id)predicateMatchingGroupsWithInviteStatus:(long long)a0;
+ (id)predicateMatchingGroupsWithName:(id)a0;

- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
