@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UIColor *navigationBarTintColor;
@property (copy, nonatomic) UIColor *buttonTintColor;

+ (id)flowOptionsFromData:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedData;
- (void)encodeWithCoder:(id)a0;

@end
