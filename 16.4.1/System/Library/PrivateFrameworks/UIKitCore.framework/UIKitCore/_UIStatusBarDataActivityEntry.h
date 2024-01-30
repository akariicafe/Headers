@class NSString;

@interface _UIStatusBarDataActivityEntry : _UIStatusBarDataEntry

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayId;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
