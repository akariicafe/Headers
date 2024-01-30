@class LNValue, LNActionConfiguration;

@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNActionConfiguration *configuration;
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaultConfiguration:(id)a0;
- (id)initWithValue:(id)a0 configuration:(id)a1;

@end
