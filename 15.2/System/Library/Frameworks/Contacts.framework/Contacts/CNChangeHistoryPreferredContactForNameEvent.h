@class CNContact;

@interface CNChangeHistoryPreferredContactForNameEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)initWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
