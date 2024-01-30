@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry

@property (nonatomic) long long status;
@property (nonatomic) BOOL lowDataModeActive;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
