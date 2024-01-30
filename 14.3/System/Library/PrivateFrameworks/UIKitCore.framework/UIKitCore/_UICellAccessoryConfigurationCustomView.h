@class UIView;

@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIView *customView;
@property (nonatomic) BOOL maintainsFixedSize;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCustomView:(id)a0;
- (BOOL)_isSystemType;
- (void)encodeWithCoder:(id)a0;

@end
