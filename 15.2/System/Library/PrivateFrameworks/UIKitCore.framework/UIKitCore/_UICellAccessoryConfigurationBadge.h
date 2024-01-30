@class NSString, UIFont;

@interface _UICellAccessoryConfigurationBadge : _UICellAccessoryConfiguration

@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (BOOL)supportsSecureCoding;

- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
