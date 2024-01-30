@class NSDictionary;

@interface TVRCButton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL hasTapAction;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (BOOL)_isMediaButtonEvent:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)_setEnabled:(BOOL)a0;
- (id)_initWithButtonType:(long long)a0;
- (id)_initWithButtonType:(long long)a0 hasTapAction:(BOOL)a1 properties:(id)a2;
- (BOOL)isEqualToButton:(id)a0;

@end
