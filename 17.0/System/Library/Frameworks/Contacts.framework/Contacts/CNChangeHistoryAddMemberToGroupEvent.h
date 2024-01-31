@class CNGroup, CNContact;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *member;
@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithMember:(id)a0 group:(id)a1;

@end
