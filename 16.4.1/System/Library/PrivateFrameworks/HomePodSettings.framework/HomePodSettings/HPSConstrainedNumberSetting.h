@class NSNumber;

@interface HPSConstrainedNumberSetting : HPSNumberSetting

@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 numberValue:(id)a1 minimumValue:(id)a2 maximumValue:(id)a3 stepValue:(id)a4;

@end
