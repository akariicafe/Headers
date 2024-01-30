@class UIImage, NSDictionary;

@interface _UISupplementalItem : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_identifier) unsigned long long identifier;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)_uiSupplementalItemWithTISupplementalItem:(id)a0 icon:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
