@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry

@property (nonatomic) long long color;
@property (nonatomic) BOOL sunlightMode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
