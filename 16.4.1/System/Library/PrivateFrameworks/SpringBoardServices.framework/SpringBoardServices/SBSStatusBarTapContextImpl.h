@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long styleOverride;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyleOverride:(unsigned long long)a0;

@end
