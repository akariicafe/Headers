@class CPImageSet, UIImage;

@interface CPMessageListItemLeadingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPImageSet *leadingImageSet;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;
@property (readonly, nonatomic) long long leadingItem;
@property (readonly, nonatomic) UIImage *leadingImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeadingItem:(long long)a0 leadingImage:(id)a1 unread:(BOOL)a2;

@end
