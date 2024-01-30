@interface CADFilter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)applicableToEntityType:(int)a0;
- (id)extendWhereClause:(id)a0 usingOperation:(long long)a1 withValues:(id)a2 andTypes:(id)a3;

@end
