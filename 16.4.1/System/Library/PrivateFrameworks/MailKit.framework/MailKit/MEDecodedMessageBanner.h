@class NSString;

@interface MEDecodedMessageBanner : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *primaryActionTitle;
@property (readonly, nonatomic, getter=isDismissable) BOOL dismissable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 primaryActionTitle:(id)a1 dismissable:(BOOL)a2;

@end
