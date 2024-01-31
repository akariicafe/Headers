@class CNGroup, NSString;

@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *group;
@property (readonly, nonatomic) NSString *containerIdentifier;

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
- (id)initWithGroup:(id)a0 containerIdentifier:(id)a1;

@end
