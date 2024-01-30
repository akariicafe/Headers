@class NSString, NSExpression;

@interface AggregatePropertyDescriptor : NSCoder <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSExpression *expression;
@property (readonly, nonatomic) unsigned long long resultType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 expression:(id)a1 resultType:(unsigned long long)a2;

@end
