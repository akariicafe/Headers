@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
