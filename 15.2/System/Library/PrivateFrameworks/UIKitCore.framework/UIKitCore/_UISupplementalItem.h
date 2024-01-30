@class UIImage, NSDictionary;

@interface _UISupplementalItem : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
