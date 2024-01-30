@class NSString, LNValue;

@interface LNActionConfigurationCondition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) LNValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParameterIdentifier:(id)a0 comparisonOperator:(long long)a1 value:(id)a2;

@end
