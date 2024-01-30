@interface _UIStatusBarDataVoiceControlEntry : _UIStatusBarDataEntry

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
