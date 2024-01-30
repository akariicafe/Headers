@interface CNChangeHistoryEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (unsigned long long)instanceSortOrder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)comparisonResultBetweenClasses:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
