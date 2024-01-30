@class CNGroup, CNContact;

@interface CNChangeHistoryRemoveMemberFromGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *member;
@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (id)initWithMember:(id)a0 group:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
