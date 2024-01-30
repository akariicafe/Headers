@class NSString, NSDate;

@interface CADPropertyFilter : CADFilter

@property (readonly, nonatomic) long long property;
@property (readonly, nonatomic) long long comparison;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) BOOL isString;
@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) BOOL isDate;

+ (BOOL)supportsSecureCoding;

- (BOOL)ekPredicateFilterMatches:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 integerValue:(long long)a2;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 stringValue:(id)a2;
- (id)initWithProperty:(long long)a0 comparison:(long long)a1 dateValue:(id)a2;
- (BOOL)validate;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applicableToEntityType:(int)a0;
- (id)extendWhereClause:(id)a0 usingOperation:(long long)a1 withValues:(id)a2 andTypes:(id)a3;
- (BOOL)validateWithRequiredPropertyType:(int)a0;

@end
