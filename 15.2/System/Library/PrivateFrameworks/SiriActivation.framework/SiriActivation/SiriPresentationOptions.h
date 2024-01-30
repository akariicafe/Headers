@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wakeScreen;
@property (nonatomic) BOOL hideOtherWindowsDuringAppearance;
@property (nonatomic) long long rotationStyle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
