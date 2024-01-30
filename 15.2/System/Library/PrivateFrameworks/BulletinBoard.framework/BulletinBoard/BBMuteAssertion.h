@interface BBMuteAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isActiveForThreadIdentifier:(id)a0;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(BOOL *)a1;

@end
