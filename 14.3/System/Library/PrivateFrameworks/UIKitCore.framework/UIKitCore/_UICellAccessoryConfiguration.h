@class NSString, UIColor;

@interface _UICellAccessoryConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isSystemType) BOOL isSystemType;
@property (readonly, nonatomic, getter=_systemType) long long systemType;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (retain, nonatomic, getter=_backgroundColor, setter=_setBackgroundColor:) UIColor *backgroundColor;
@property (nonatomic) BOOL usesDefaultLayoutWidth;
@property (retain, nonatomic) UIColor *tintColor;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
