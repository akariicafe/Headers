@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)acceptEventVisitor:(id)a0;

@end
