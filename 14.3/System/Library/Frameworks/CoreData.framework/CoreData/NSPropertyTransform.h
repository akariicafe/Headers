@class NSString, NSExpression;

@interface NSPropertyTransform : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSExpression *valueExpression;
@property (retain, nonatomic) NSPropertyTransform *prerequisiteTransform;
@property BOOL replaceMissingValueOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyName:(id)a0 valueExpression:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
