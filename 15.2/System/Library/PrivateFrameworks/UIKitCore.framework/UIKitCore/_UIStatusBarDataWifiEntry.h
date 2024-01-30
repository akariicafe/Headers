@interface _UIStatusBarDataWifiEntry : _UIStatusBarDataNetworkEntry

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
