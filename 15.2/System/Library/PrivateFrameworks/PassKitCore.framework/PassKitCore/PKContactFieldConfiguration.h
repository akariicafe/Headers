@interface PKContactFieldConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;

+ (id)contactFieldConfigurationWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;

@end
