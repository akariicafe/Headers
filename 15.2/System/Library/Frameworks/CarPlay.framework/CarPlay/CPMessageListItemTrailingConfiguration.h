@class CPImageSet, UIImage;

@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPImageSet *trailingImageSet;
@property (readonly, nonatomic) long long trailingItem;
@property (readonly, nonatomic) UIImage *trailingImage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTrailingItem:(long long)a0 trailingImage:(id)a1;

@end
