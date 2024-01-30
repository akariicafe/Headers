@class NSString, WFIcon, WFImage;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, copy, nonatomic) WFImage *image;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;

+ (id)attributionWithTitle:(id)a0 icon:(id)a1 image:(id)a2 associatedAppBundleIdentifier:(id)a3;
+ (id)attributionWithAppBundleIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1 image:(id)a2 associatedAppBundleIdentifier:(id)a3;

@end
