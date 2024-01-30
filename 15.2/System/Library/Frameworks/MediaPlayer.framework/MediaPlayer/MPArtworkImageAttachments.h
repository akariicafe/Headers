@class UIColor;

@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) BOOL hasTitle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTextColor:(id)a0 hasTitle:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
