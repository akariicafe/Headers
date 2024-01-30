@class CNContact;

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *fromContact;
@property (readonly, nonatomic) CNContact *toContact;

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
- (id)initWithFromContact:(id)a0 toContact:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
