@class CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *contact;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)initWithContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
