@class NSString;

@interface _UIStatusBarDataActivityEntry : _UIStatusBarDataEntry

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayId;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
