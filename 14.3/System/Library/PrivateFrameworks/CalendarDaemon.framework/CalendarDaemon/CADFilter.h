@interface CADFilter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)ekPredicateFilterMatches:(id)a0;
- (BOOL)validate;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applicableToEntityType:(int)a0;
- (id)extendWhereClause:(id)a0 usingOperation:(long long)a1 withValues:(id)a2 andTypes:(id)a3;

@end
