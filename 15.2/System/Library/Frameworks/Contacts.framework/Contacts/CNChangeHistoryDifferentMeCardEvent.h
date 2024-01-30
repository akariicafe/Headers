@class NSString;

@interface CNChangeHistoryDifferentMeCardEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
