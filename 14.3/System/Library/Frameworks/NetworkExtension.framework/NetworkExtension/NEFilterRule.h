@class NENetworkRule;

@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NENetworkRule *networkRule;
@property (readonly) long long action;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetworkRule:(id)a0 action:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
