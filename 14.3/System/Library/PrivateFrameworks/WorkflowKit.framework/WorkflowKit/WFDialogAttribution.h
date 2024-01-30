@class NSString, WFImage;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) WFImage *icon;

+ (id)attributionWithTitle:(id)a0 icon:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
