@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int styleOverride;

- (id)initWithCoder:(id)a0;
- (id)initWithStyleOverride:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
