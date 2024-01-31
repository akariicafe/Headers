@class NSArray;

@interface CNChangeHistoryEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *contactIdentifiers;

+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultBetweenClasses:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
