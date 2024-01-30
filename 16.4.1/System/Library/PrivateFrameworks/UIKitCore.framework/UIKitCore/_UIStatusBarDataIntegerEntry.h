@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry

@property (nonatomic) long long rawValue;
@property (nonatomic) long long displayValue;
@property (nonatomic) BOOL displayRawValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
