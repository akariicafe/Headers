@interface RTMapServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useBackgroundTraits;

- (id)init;
- (id)initWithUseBackgroundTraits:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
