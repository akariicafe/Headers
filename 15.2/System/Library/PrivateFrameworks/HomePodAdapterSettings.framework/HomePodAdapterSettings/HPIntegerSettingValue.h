@class NSNumber;

@interface HPIntegerSettingValue : HPSettingValue <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) double doubleValue;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)a0 numberValue:(id)a1;

@end
