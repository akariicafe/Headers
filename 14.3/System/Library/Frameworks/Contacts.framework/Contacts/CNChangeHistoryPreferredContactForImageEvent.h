@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact;

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
- (id)initWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
