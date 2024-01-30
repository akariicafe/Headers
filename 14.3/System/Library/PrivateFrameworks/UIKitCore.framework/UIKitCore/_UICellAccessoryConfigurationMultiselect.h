@class UIColor;

@interface _UICellAccessoryConfigurationMultiselect : _UICellAccessoryConfiguration

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *selectedTintColor;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (void)encodeWithCoder:(id)a0;

@end
