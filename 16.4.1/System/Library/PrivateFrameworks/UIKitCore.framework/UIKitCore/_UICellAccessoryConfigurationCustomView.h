@class UIView;

@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIView *customView;
@property (nonatomic) BOOL maintainsFixedSize;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)_isSystemType;
- (id)initWithCustomView:(id)a0;

@end
