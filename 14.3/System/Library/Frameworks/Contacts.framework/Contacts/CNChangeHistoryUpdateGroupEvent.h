@class CNGroup;

@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *group;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)init;
- (id)initWithGroup:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
